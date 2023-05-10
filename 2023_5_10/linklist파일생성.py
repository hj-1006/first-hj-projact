import requests
from bs4 import BeautifulSoup
import urllib

load_url = "http://python.cyber.co.kr/pds/books/python2nd/test2.html"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")

filename = "linklist.txt"
with open(filename,"w")as f:
    for el in soup.find_all("a"):
        url = el.get("href")
        link_url = urllib.parse.urljoin(load_url,url)
        f.write(el.text+"\n")
        f.write(link_url+"\n")
        f.write("\n")