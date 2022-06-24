from urllib.request import urlopen
from bs4 import BeautifulSoup
import ssl

#Ignore SSL certificate errors
ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = input('Enter - ')
html = urlopen(url, context = ctx).read()
soup = BeautifulSoup(html, "html.parser")

#retrieve all the anchor tags
tags = soup('span')

sum = 0
count = 0

for tag in tags:
    #print('Tag: ', tag)
    #print('URL: ', tag.get('href', None))
    #print('Contents: ', tag.contents[0])
    count = count + 1
    sum = sum + int(tag.contents[0])
    #print('Attrs: ', tag.attrs)
print('Count ', count)
print('Sum ', sum)
