all: mc.ps

mc.ps.gz: mc.ps
	rm -f mc.ps.gz
	gzip -9 mc.ps

mc.ps: mc.dvi
	dvips mc.dvi > mc.ps

mc.dvi: mc.tex mc1.tex mc2.tex mc3.tex mc4.tex mc5.tex mc6.tex bib.tex \
	average.eps netscape.eps click-to-raise.eps relocate.eps \
	focus-in-cursor.eps xgraph-button-close.eps focus-out-cursor.eps \
	xgraph-button-hardcopy-ok.eps kterm-icon.eps \
	xgraph-button-hardcopy.eps kterm.eps xgraph-hardcopy.eps \
	left-ptr.eps xgraph.eps mule-mode-echo.eps xinit.eps mule.eps
	jlatex mc.tex

mc1.tex: mc1.html
	cat mc1.html | ./html2tex > mc1.tex

mc2.tex: mc2.html
	cat mc2.html | ./html2tex > mc2.tex

mc3.tex: mc3.html
	cat mc3.html | ./html2tex > mc3.tex

mc4.tex: mc4.html
	cat mc4.html | ./html2tex > mc4.tex

mc5.tex: mc5.html
	cat mc5.html | ./html2tex > mc5.tex

mc6.tex: mc6.html
	cat mc6.html | ./html2tex > mc6.tex

bib.tex: bib.html
	cat bib.html | ./html2tex > bib.tex
