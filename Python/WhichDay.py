import datetime		# A built-in class that will be used
# An array for the days of the week
days = ['MONDAY','TUESDAY','WEDNESDAY','THURSDAY','FRIDAY','SATURDAY','SUNDAY']
# Get inputs
T = int(input()))
for _ in range(T):
	# map day/month//year
    d,m,y = map(int,input().split())
    # Use date class to calculate the day
    ans = datetime.date(y,m,d).weekday()
    # print ans
    print(days[ans])