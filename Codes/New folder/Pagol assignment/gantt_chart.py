from operator import index
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import matplotlib.dates as mdates

# read data
data = pd.read_csv('gantt chart data.csv')

# print data
print(data)

# drawing gantt chart
n = len(data)
plt.figure(num=1, figsize=[10, 5], dpi= 100)
bar_width = 0.9

for i in range(n):
    i_rev = n - i - 1
    # plotting the last task first
    plt.broken_barh([(data["Start"][i_rev], data["Duration"][i_rev])], (i - bar_width / 2, bar_width), color="c")
    plt.broken_barh([(data["Start"][0], data["PastTime"][i_rev])], (i - bar_width / 2, bar_width), color="w")

y_pos = np.arange(n)
plt.yticks(y_pos, labels=reversed(data["Activity"]))

# xticks
plt.gca().xaxis.set_major_locator(mdates.DayLocator())

# grid
plt.grid(axis="x", which="major", lw=1)

# finishing touch
plt.xlim(data["Start"][0])
plt.xlabel("\nDays", fontsize = 12, weight = "bold", style = "italic")
plt.ylabel("Activity\n", fontsize = 12, weight = "bold", style = "italic")
plt.title("Gantt Chart\n", fontsize = 16, weight = "bold")
plt.tight_layout(pad=2)

# plot graph
plt.show()