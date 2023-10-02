from time import sleep
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver import ActionChains,Keys

serv_obj=Service("C:\drivers\chromedriver.exe")
driver=webdriver.Chrome(service=serv_obj)

driver.maximize_window()
driver.get('https://swosnl.github.io/jQuery-context')
sleep(5)