from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn import svm
from sklearn import metrics
#loading the datasets
cancer_ds = datasets.load_breast_cancer()
# print(cancer_ds)
# print(cancer_ds['target'])

#split the data
xtrain,xtest,ytrain,ytest=train_test_split(cancer_ds.data,cancer_ds.target,test_size=0.4,random_state=209)

#generate the model
cls=svm.SVC(kernel="linear")

#train the model
cls.fit(xtrain,ytrain)

#predict the response
pred=cls.predict(xtest)

print("Accuracy",metrics.accuracy_score(ytest,y_pred=pred))

print("Precision score",metrics.precision_score(ytest,y_pred=pred))

print("Recall",metrics.recall_score(ytest,y_pred=pred))

print("Classification Report")
print(metrics.classification_report(ytest,y_pred=pred))


# svm_usecase

import matplotlib.pyplot as plt
from sklearn import datasets
from sklearn import svm
from sklearn import metrics

digits=datasets.load_digits()
#small value added so that accuracy improves(gamma)
#increaSE The gamma value accuracy decreases
clf=svm.SVC(gamma=0.001,C=100)
x,y=digits.data[:-10],digits.target[:-10]
clf.fit(x,y)

print(clf.predict(digits.data[:-10]))
plt.imshow(digits.images[9],interpolation='nearest')
plt.show()
# print(digits)