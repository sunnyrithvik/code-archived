
myself = {"name": "Rithvik",
          "rollno": "20011D4508",
          "spec": "SSP",
          "college": "JNTUH"}

subjects = {"sub1":"ADSP",
            "sub2":"DSPA",
            "sub3":"RPQT",
            "sub4":"TT",
            "sub5":"RM&IPR"}

print(myself)
print(len(myself))
myself['branch'] = "ECE"
print("after branch insertion")
print(myself)
del myself['college']
print("after college deletion")
print(myself)
print(subjects)
print('sub4' in subjects)
print('paper' in subjects)

