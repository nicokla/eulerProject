import time
from datetime import timedelta
from datetime import date
d1 = date(1901,1,1)
d2 = date(2000,12,31)
s = 0
d = d1
day = timedelta(days=1)
while (d <= d2):
    if (d.isoweekday() == 7 and d.day == 1):
        s += 1
    d += day
print(s)
