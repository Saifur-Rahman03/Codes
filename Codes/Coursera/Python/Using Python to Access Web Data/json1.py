import json
#nested dictionaries
data = '''{
    "name" : "chuck",
    "phone" : {
        "type" : "intl",
        "number" : "+1 734 303 4456"
    },
    "email" : {
        "hide" : "yes"
    }
}'''

info = json.loads(data)
#print(type(info)
print('User count: ', len(info))
print('Name: ', info["name"])
print('Hide: ', info["email"]["hide"])
