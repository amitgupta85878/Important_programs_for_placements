from googletrans import Translator

trans = Translator()
out = trans.translate('आप कैसे हैं')
print(out.text)
