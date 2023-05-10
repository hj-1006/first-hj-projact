import requests
from bs4 import BeautifulSoup
import urllib

load_url = "http://python.cyber.co.kr/pds/books/python2nd/test2.html"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")


for el in soup.find_all("a"):
    print(el.text)
    url = el.get("href")
    link_url = urllib.parse.urljoin(load_url,url)
    print(link_url)
