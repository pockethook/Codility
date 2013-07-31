def solution(A):
	"""Find pivot in list where left==right."""

	diff = sum(A)

	for index, elem in enumerate(A):

		diff -= elem
		if not diff:
			return index
		diff -= elem

	return -1
