import requests
from bs4 import BeautifulSoup

load_url = "http://python.cyber.co.kr/pds/books/python2nd/test1.html"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")

print(soup)