from sklearn.metrics import confusion_matrix

y_true = [1,0,1,1,0,1]
y_pred = [0,0,1,1,0,1]
print(confusion_matrix(y_true,y_pred))

