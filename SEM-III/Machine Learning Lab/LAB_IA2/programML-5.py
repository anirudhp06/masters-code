#titanic dataset
import seaborn as sns
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# print(sns.get_dataset_names())
data=sns.load_dataset("titanic")
# print(data.head())
# print(len(data))
# print(data.info())
print("Survived data")
print(data['survived'].value_counts( ))
sns.countplot(x=data['survived'])
plt.show()
# sns.countplot(x=data['survived'],hue=data['pclass'])
# plt.show()
sns.countplot(x=data['survived'],hue=data['sex'])
plt.show()
# sns.countplot(x=data['survived'],hue=data['deck'])
# plt.show()
# print(data.columns)
cols=[ 'fare', 'class', 'who', 'adult_male', 'deck', 'embark_town','alive', 'alone']
data_new=data.drop(cols,axis=1)
# print(data_new.head())
# print(data_new.isnull().sum())
#
# #data preprocessing
meanage=data_new['age'].mean()
# print(meanage)
meanage=round(meanage,2)
# print(meanage)
data_new['age']=data_new['age'].fillna(meanage)
# print(data_new.isnull().sum())
#
data_new=data_new.dropna()
# print(data_new.isnull().sum())
# print(len(data_new))
# print(data_new.info())
#
# #label encoding
# print(data['sex'].value_counts())
# print(data['embarked'].value_counts())
#
from sklearn.preprocessing import LabelEncoder
enc=LabelEncoder()
data_new['sex']=enc.fit_transform(data_new['sex'])
data_new['embarked']=enc.fit_transform(data_new['embarked'])
# print(data_new.head())
#
# #features and target
x=np.array(data_new.iloc[:,1:])
# print(x.shape)
y=np.array(data_new.iloc[:,0])
# print(y.shape)
#
from sklearn.model_selection import train_test_split
xtrain , xtest , ytrain , ytest = train_test_split(x,y,train_size=.80 , random_state=3)
# print(pd.DataFrame(ytrain).value_counts())
#
from sklearn.neighbors import KNeighborsClassifier
model=KNeighborsClassifier(n_neighbors=3,p=2)
model.fit(xtrain,ytrain)
ypred=model.predict(xtest)
# print(ypred)
# print(ytest)
c=0
for i in range(len((ytest))):
    if ytest[i]==ypred[i]:
        c=c+1
# print(c)
# print(len(ytest))
# print(c/len(ytest))
# print(ytest[1]==ypred[1])
#
from sklearn.metrics import accuracy_score
a=accuracy_score(ytest,ypred)
# print(a)
#
import joblib
joblib.dump(model,"titanic.pkl")
my=joblib.load("titanic.pkl")
print(my.predict([[1,0,20,2,0,1]]))