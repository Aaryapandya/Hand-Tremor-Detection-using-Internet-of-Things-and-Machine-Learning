import pandas as pd
df = pd.read_csv("Dataset/Shaking_combined.txt", sep=',')
df.to_csv('output2.csv', index=False)