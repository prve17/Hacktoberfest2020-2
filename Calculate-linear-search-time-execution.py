import random

def Rand(start,end,num):
  res=[]

  for j in range(num):
    res.append(random.randint(start,end))
  return res


def linear_search(e):
  #num=int(input("enter the data size:"))
  found=False
  for i in Rand(1,200,50000):
    if i==e:
      found=True
      print("element found")
      break
  if found==False:       
    print("element not found")


import time 
e=int(input("enter the element,you want to find:"))
T1=time.time()*1000
linear_search(e)
T2=time.time()*1000
print("TIME COMPLEXITY TO EXECUTE LINEAR SEARCH:",T2-T1)
