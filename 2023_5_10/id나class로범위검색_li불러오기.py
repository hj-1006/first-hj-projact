import requests
from bs4 import BeautifulSoup

load_url = "http://python.cyber.co.kr/pds/books/python2nd/test2.html"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")

#id로 검색해 태그 내용을 표시한다.
#"윗 내용)->
topic = soup.find(class_="list_newsmajor")
for element in topic.find_all("li"):
    print(element.text)