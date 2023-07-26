import time

from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By

serv_obj=Service("C:\drivers\chromedriver.exe")
driver=webdriver.Chrome(service=serv_obj)

driver.maximize_window()
#driver.get("https://www.amazon.in")

#xpath
#1.Absolute(Full) XPath
#driver.find_element(By.XPATH,"/html/body/div[1]/header/div/div[1]/div[2]/div/form/div[2]/div[1]/input").send_keys("T-Shirts")
#driver.find_element(By.XPATH,"/html/body/div[1]/header/div/div[1]/div[2]/div/form/div[3]/div/span/input").click()

#2.Relative(partial) XPath
#driver.find_element(By.XPATH,"//*[@id='twotabsearchtextbox']").send_keys("tshirts")
#driver.find_element(By.XPATH,"//*[@id='nav-search-submit-button']").click()

#xpath options: or,and,contains(),startswith(),text()
#or
#driver.find_element(By.XPATH,"//*[@id='twotabsearchtextbox' or @name='field-keywords']").send_keys("tshirt")

#and
#driver.find_element(By.XPATH,"//*[@id='twotabsearchtextbox' and @class='nav-input nav-progressive-attribute']").send_keys("tshirt")

#contains() and strats()
#driver.find_element(By.XPATH,"//input[starts-with(@id,'twotab')]").send_keys("Hello")
#driver.find_element(By.XPATH,"//input[contains(@id,'twotab')]")

driver.get("https://money.rediff.com/gainers/bse/daily/groupa")

#self
self_txt=driver.find_element(By.XPATH, "//a[contains(text(),'NTPC')]/self::a").text
print("Data from Self text:{}".format(self_txt))

#parent
txt=driver.find_element(By.XPATH, "//a[contains(text(),'NTPC')]/parent::td").text
print("Data from Parent text:{}".format(txt))

#child(there are no child node for self so we consider ancestor as self loop and retrieve child)
childs=driver.find_elements(By.XPATH,"//a[contains(text(),'NTPC')]/ancestor::tr/child::td")
print("No of child",len(childs))

#ancestor
anc=driver.find_elements(By.XPATH,"//a[contains(text(),'NTPC')]/ancestor::tr")
print("Ancestor text:",anc)

#descendants(there are no descendants node for self so we consider ancestor as self loop and retrieve descendants)
desc=driver.find_elements(By.XPATH,"//a[contains(text(),'NTPC')]/ancestor::tr/descendant::*")
print("NO of Descendants Node",len(desc))

#following(there are no following node for self so we consider ancestor as self loop and retrieve following)
foll=driver.find_elements(By.XPATH,"//a[contains(text(),'NTPC')]/ancestor::tr/following::*")
print("No of Followings are",len(foll))

#following-sibling(there are no following sibling node for self so we consider ancestor as self loop and retrieve following sibling)
foll_sib=driver.find_elements(By.XPATH,"//a[contains(text(),'NTPC')]/ancestor::tr/following-sibling::*")
print("No of Following Siblings are",len(foll_sib))

#preceeding((there are no preceding node for self so we consider ancestor as self loop and retrieve preceding)
pre=driver.find_elements(By.XPATH,"//a[contains(text(),'NTPC')]/ancestor::tr/preceding::*")
print("No of Precedings are",len(pre))

#preceding sibling
pre_sib=driver.find_elements(By.XPATH,"//a[contains(text(),'NTPC')]/ancestor::tr/preceding-sibling::*")
print("No of PrecedingSiblings are",len(pre_sib))
time.sleep(2)