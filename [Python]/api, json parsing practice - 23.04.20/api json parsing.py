import requests
import json

# datas = {
#     'userId' : 'value1',
#     "id": 'value2',
#     "title": "value3",
#     "completed": "value4",
#     "ex" : "val"
# }

url = "https://jsonplaceholder.typicode.com/todos"

requestData = requests.get(url)
jsonData = None

dic = {}

if requestData.status_code == 200: # 통신이 정상적으로 이루어졌을 때
    jsonData = requestData.json()
    for value in jsonData:
        # dic[id] = value.get('id')
        # dic[value.get('id')] = jsonData.get('id')
        # print(value.get('id'))
        # print(value)

        dic[value.get('id')] = {
            "setCode" : value.get('userId'),
            "str" : value.get('title')
        }
else:
    print("통신이 정상적으로 이루어지지 않았습니다.")

print(dic)

input = int(input())
print(dic[input]['str'])
