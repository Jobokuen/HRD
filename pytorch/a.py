import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score

def main():
    folder = "/home/hrd/Desktop/HRD/data/csv/"
    names = ['sepal_length', 'sepal_width', 'petal_length', 'petal_width', 'Class']
    dataset : pd.DataFrame = pd.read_csv(folder + "iris.csv", names=names)
    
    X = dataset.iloc[:, :-1].values
    y = dataset.iloc[:, 4].values
    
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.20,random_state=0)
    scaler = StandardScaler()
    
    X_train = scaler.fit_transform(X_train)
    X_test = scaler.transform(X_test)
    
    knn = KNeighborsClassifier(n_neighbors=5)
    knn.fit(X_train, y_train)
    
    y_pred = knn.predict(X_test)
    accuracy_score(y_test, y_pred)
    
    k = 10
    acc_array = np.zeros(k)
    for k in np.arange(1,k+1):
        knn = KNeighborsClassifier(n_neighbors=k)
        knn.fit(X_train, y_train)
        y_pred = knn.predict(X_test)
        acc_array[k-1] = accuracy_score(y_test, y_pred)
    
    
    

if __name__ == "__main__":
    main()