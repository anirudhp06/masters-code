import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.metrics import classification_report,confusion_matrix, accuracy_score

data=pd.read_csv("placement.csv")
# print(data)
# print(data.info())
# print(data.isnul00l().sum())
# print(data.shape)

# sns.countplot(x="status",data=data)
# plt.show()

# sns.countplot(x="status",hue="gender",data=data)
# plt.show()

data.drop(['sl_no','gender','ssc_b','hsc_b','hsc_s','degree_t','specialisation'],axis=1,inplace=True)
# print(data)

#label encoding value takes 0 in alpahabetical order so no=0,yes=1
from sklearn.preprocessing import LabelEncoder
enc=LabelEncoder()
data['workex']=enc.fit_transform(data['workex'])
# print(data)

#features
X=data.drop('status',axis=1)
#target
Y=data['status']

xtrain,xtest,ytrain,ytest=train_test_split(X,Y,test_size=0.30,random_state=1)

from sklearn.naive_bayes import GaussianNB
model=GaussianNB()
model.fit(xtrain,ytrain)

ypred=model.predict(xtest)
df=pd.DataFrame({'Actual Test':ytest,'Predicted Status':ypred})
# print(df)

# print(classification_report(ytest,ypred))
#diagonal elements are the total number of correct prediction
# print(confusion_matrix(ytest,ypred))

# print(accuracy_score(ytest,ypred)*100)

import joblib
joblib.dump(model,"placement.pkl")
mymodel=joblib.load("placement.pkl")
print(mymodel.predict([[65,90,80,0,85,89]]))