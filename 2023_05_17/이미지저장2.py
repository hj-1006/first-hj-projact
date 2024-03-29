import requests
from bs4 import BeautifulSoup
from pathlib import Path
import time
import urllib 

#웹 페이지를 구해 해석한다.
load_url = "http://python.cyber.co.kr/pds/books/python2nd/test2.html"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")
   
#저장용 폴더를 만든다.
out_folder = Path("HJlink_text2")
out_folder.mkdir(exist_ok=True)

# 모든 img 태그를 검색해 링크를 구한다.
for element in soup.find_all("img"):
    src = element.get("src")
    
    #절대 URL과 파일을 표시한다.
    image_url = urllib.parse.urljoin(load_url,src)
    imgdata = requests.get(image_url)

    #URL에서 마지막에 있는 파일명을 추출하고 저장 폴더명과 연결한다.
    filename = image_url.split("/")[-1]
    out_path = out_folder.joinpath(filename)

#--------------------------------------------------

# 파일을 생성하고 내용을 쓴다.
with open(out_path, mode="wb") as f:
    f.write(imgdata.content)

#한번 엑세스 후 1초 기다린다.
time.sleep(1)