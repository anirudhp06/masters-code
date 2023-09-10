from time import sleep
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.support.select import Select

serv_obj=Service("C:\drivers\chromedriver.exe")
driver=webdriver.Chrome(service=serv_obj)

driver.maximize_window()

driver.get("https://demoqa.com/select-menu")

drop_element=driver.find_element(By.XPATH,"//select[@id='oldSelectMenu']")

dropcolor=Select(drop_element)
dropcolor.select_by_visible_text('Black')

sleep(3)
# Select by value
dropcolor.select_by_value("3")
sleep(3)

# Select by index
dropcolor.select_by_index(4)
sleep(3)

# Capture all options
all_options=dropcolor.options

print("Options in dropdown menu are:")
for opts in all_options:
    print(opts.text)
print("Total number of dropdown menus:{}".format(len(all_options)))
sleep(3)

# Without using built-in options
for opts in all_options:
    if opts.text=="Black":
        opts.click()

sleep(5)
