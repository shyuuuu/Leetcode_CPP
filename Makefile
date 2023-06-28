no ?= 0

push:
	git add .
	git commit -m "$(no)"
	git push