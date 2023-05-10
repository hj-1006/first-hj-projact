import requests
from bs4 import BeautifulSoup

load_url = "http://python.cyber.co.kr/pds/books/python2nd/test1.html"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")
#수프 파인드로 테그를 불러온다.
print(soup)
print()
print(soup.find("title"))
print()
print(soup.find("h2"))
print()
print(soup.find("li"))

