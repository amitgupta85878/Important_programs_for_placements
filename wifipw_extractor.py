import subprocess as sp
data = sp.check_output(['netsh', 'wlan', 'show', 'profiles']).decode('utf-8', errors="backslash")

'''
data2 = data.split("\n")
print(data2)



for i in range(len(data2)):

    if "All User Profile" in data2[i]:
        s = len(data2[i+1])
        print(data2[i+1][0:s-25])

'''

profiles  = [i.split(":")[1][1:-1] for i in data.split('\n') if "All User Profile" in i]

for i in profiles:
            try:
                 results = sp.check_output(['netsh', 'wlan', 'show', 'profiles', i, 'key=clear']).decode('utf-8', errors="backslash")
                 results = [b.split(":")[1][1:-1] for b in results.split('\n') if "Key Content" in b]

                 try:
                     print("{:<30}|  {:<}".format(i, results[0]))
                 except IndexError:
                     print("{:<30}|  {:<}".format(i, ""))
            except sp.CalledProcessError:
                 print("{:<30}|  {:<}".format(i, "ENCODING ERROR"))

input("")
