#!/bin/sh
sed \
	-e 's@\\mem{\([A-Za-z\-]*\)}@<i>\1</i>@g' \
	-e 's@\\sym{\([A-Za-z\-]*\)}@<tt>\1</tt>@g' \
	-e 's@\\\\@<br>@' \
	-e 's@\\begin{define}{\([A-Za-z\-]*\)}@\1<br>@g' \
	-e 's@\\end{define}@</p>@g' \
	-e 's@\\begin{itemize}@<ul>@g' \
	-e 's@\\end{itemize}@</ul>@g' \
	-e 's@\\item@<li>@g' \
	-e 's@\\begin{note}{\(.*\)}@<blockquote><center>\1</center><br>@g' \
	-e 's@\\end{note}@</blockquote>@g' \
	-e 's@\\subsection{\(.*\)}@<h3>\1</h3>@g' \
	-e 's@\\subsubsection{\(.*\)}@<h4>\1</h4>@g'
