import requests
from bs4 import BeautifulSoup

load_url = "http://python.cyber.co.kr/pds/books/python2nd/test2.html"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")

#id로 검색해 태그 내용을 표시한다.
chap2 = soup.find(id="chap2")
print(chap2)