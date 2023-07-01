msg = 

git:
ifdef msg
	git add .
	git commit -m "$(msg)"
	git push
else
	@echo Error: Need commit message!
endif

push:
	git push