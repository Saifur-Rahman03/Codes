import urllib.request, urllib.parse, urllib.error
import xml.etree.ElementTree as ET
import ssl

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = input('Enter Location: ')
print('Retrieving ', url)
xml = urllib.request.urlopen(url, context = ctx).read()
print('Retrieving ', len(xml), 'characters')
stuff = ET.fromstring(xml)
lst = stuff.findall('comments/comment')
print('Count: ', len(lst))

sum = 0
for item in lst:
    sum = sum + int(item.find('count').text)
print('Sum: ', sum)
