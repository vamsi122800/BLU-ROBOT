# Plot the Decision Tree

plt.figure(figsize=(25, 12))
plot_tree(model,
          feature_names=X.columns,
          class_names=['No HeartAttack', 'HeartAttack'],
          filled=True,
          rounded=True,
          fontsize=10)
plt.show()
