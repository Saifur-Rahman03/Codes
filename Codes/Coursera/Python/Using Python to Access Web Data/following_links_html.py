import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup
import ssl

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE


lst = list()
url = input('Enter URL: ')
count = input('Enter count: ')
position = input('Enter position: ')
print('Retrieving: ', url)
html = urllib.request.urlopen(url, context = ctx).read()
soup = BeautifulSoup(html, 'html.parser')

tags = soup('a')
for tag in tags:
    lst.append(tag.get('href', None))
#print(lst)
while int(count) >= 1:
    url = lst[int(position) - 1]
    print('Retrieving: ', url)
    html = urllib.request.urlopen(url, context = ctx).read()
    soup = BeautifulSoup(html, 'html.parser')
    lst = list()
    tags = soup('a')
    for tag in tags:
        #print(tag.get('href', None))
        lst.append(tag.get('href', None))
    count = int(count) - 1
