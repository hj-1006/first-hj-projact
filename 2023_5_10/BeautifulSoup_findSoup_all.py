import requests
from bs4 import BeautifulSoup

load_url = "http://python.cyber.co.kr/pds/books/python2nd/test2.html"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")

#이 명령문으로 li테그에 모든 것을 불러온다.
for element in soup.find_all("li"):
    print(element.text)