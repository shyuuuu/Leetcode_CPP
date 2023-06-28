no ?= Makefile

git:
	git add .
	git commit -m "$(no)"
	git push

push:
	git push