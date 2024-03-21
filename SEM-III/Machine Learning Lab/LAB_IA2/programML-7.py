import pandas as pd
import numpy as np
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
from sklearn.mixture import GaussianMixture

X=pd.read_csv("driver-data.csv")

print(X.info())

x1=X['mean_dist_day'].values
print(x1)
x2=X['mean_over_speed_perc'].values
print(x2)

# x3=np.array(list(zip(x1,x2)))
#reshaping the array using reshape in python according to user
X=np.array(list(zip(x1,x2))).reshape(len(x1),2)
print(X.shape)

plt.plot()
# set the limit of x axis using xlim
# plt.xlim([0,250])
# plt.ylim([0,100])
# plt.title('Dataset')
# plt.scatter(x1,x2)
# plt.show()

import matplotlib.pyplot as p1
kmeans=KMeans(n_clusters=3)
kmeans.fit(X)
print(kmeans.cluster_centers_)
print(kmeans.labels_)
p1.title("KMEANS")
p1.scatter(X[:,0],X[:,1], c=kmeans.labels_, cmap='rainbow')
p1.scatter(kmeans.cluster_centers_[:,0],kmeans.cluster_centers_[:,1],color='black')
p1.show()





