age_1 = int(input("Enter the age of person_1:"))
age_2 = int(input("Enter the age of person_2:"))
age_3 = int(input("Enter the age of person_3:"))
if age_1 > age_2 and age_1 > age_3:
    print("person_1 is promoted.")
elif age_2 > age_1 and age_2 > age_3:
    print("person_2 is promoted.")
else:
    print("person_3 is promoted.")
