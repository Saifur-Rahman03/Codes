import urllib.request, urllib.parse, urllib.error
import json
import ssl

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = input('Enter location: ')
print('Retrieving ', url)
input = urllib.request.urlopen(url, context = ctx).read()
info = json.loads(input)
print('Retrieved ', len(input), ' characters')

count = 0
sum = 0
for item in info["comments"]:
    count = count + 1
    sum = sum + int(item["count"])
print('Count: ', count)
print('Sum: ', sum)
