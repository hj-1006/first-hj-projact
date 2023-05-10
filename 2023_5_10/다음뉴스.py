import requests
from bs4 import BeautifulSoup

#다음뉴스
#load_url = "https://news.daum.net/society#1"
load_url = "https://news.daum.net/digital#1"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")

 
chap2 = soup.find(class_="box_g box_news_major")
for el in chap2.find_all("a"):
    print(el.text)