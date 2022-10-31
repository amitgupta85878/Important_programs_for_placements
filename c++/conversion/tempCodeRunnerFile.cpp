 while (num != 0)
    {
        int bit = num & 1;
        ans = (bit * pow(10, i)) + ans;
        num = num >> 1;
        i++;
    }
    cout << ans << endl;
    i = 0;
    while (ans != 0)
    {
        int rem = ans % 10;
        if (rem == 0)
        {
            rem = 1;
            
        }
        else
        {
            rem=0;
        }
            cout << "rem=" << rem << endl;
            newans = (rem * pow(2, i)) + newans;
        ans = ans / 10;
        i++;
    }