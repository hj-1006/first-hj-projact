import requests
from pathlib import Path

#저장용 폴더를 만든다.
out_folder = Path("HJimage")
out_folder.mkdir(exist_ok=True)

#이미지파일을 취득한다.
#image_url = "https://www.muji.com/wp-content/uploads/sites/12/2021/02/026-430x430.jpg"
image_url = "https://www.stagbeetles.com/data/file/webzine_etc/1948423764_1010d48a_021.jpg"
imgdata = requests.get(image_url)

#URL에서 마지막에 있는 파일명을 추출한다.
filename = image_url.split("/")[-1]
out_path = out_folder.joinpath(filename)

#이미지 데이터를 파일에 쓴다.
with open(out_path, mode="wb") as f:
    f.write(imgdata.content)
