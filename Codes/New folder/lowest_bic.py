import numpy as np

# Example data
data = [
    ("SARIMAX (1, 1, 1) x (1, 1, 1, 52)52 : BIC Calculated =", np.nan),
    ("SARIMAX (2, 2, 2) x (2, 2, 2, 52)52 : BIC Calculated =", np.nan),
    ("SARIMAX (1, 1, 1) x (1, 1, 1, 52)52 : BIC Calculated =", 100.0),
    ("SARIMAX (2, 2, 2) x (2, 2, 2, 52)52 : BIC Calculated =", 150.0),
    # Add more data entries here
]

# Extract non-NaN BIC values and corresponding SARIMAX parameters
bic_values = []
sarimax_params = []

for entry in data:
    sarimax_str, bic = entry
    if not np.isnan(bic):
        bic_values.append(bic)
        sarimax_params.append(sarimax_str)

# Sort the values and get the 10 smallest BIC values
sorted_indices = np.argsort(bic_values)
top_10_indices = sorted_indices[:10]

# Print the top 10 smallest BIC values and corresponding SARIMAX parameters
for idx in top_10_indices:
    print(f"BIC Calculated = {bic_values[idx]}, SARIMAX Parameters: {sarimax_params[idx]}")
