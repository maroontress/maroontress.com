/^<pre>$/,/^<\/pre>$/!{
s@<u>@\\underline{@g
s@</u>@\}@g
s@<tt>@\{\\tt @g
s@</tt>@\}@g
s@<i>@\{\\sl @g
s@</i>@\}@g
s@<I>@$@g
s@</I>@$@g
s@<a name=".*">@@g
s@</a>@@g
s@<title>.*</title>@@g
s@<h1>.*</h1>@@g
s@<h2>[0-9]\. \(.*\)</h2>@\\section\{\1\}@g
s@<h2>\(.*\)</h2>@\\section*\{\1\}\\addcontentsline\{toc\}\{section\}\{\1\}@g
s@<h3>[0-9]\.[0-9]\. @\\subsection\{@g
s@</h3>@\}@g
s@<h4>[0-9]\.[0-9]\.[0-9]\. @\\subsubsection\{@g
s@</h4>@\}@g
s@<table border width="100%">@\\begin{term}@g
s@<td nowrap>@@g
s@</table>@\\end{term}@g
s@<ol>@\\begin{enumerate}@g
s@</ol>@\\end{enumerate}@g
s@<ul>@\\begin{itemize}@g
s@</ul>@\\end{itemize}@g
s@<li>@\\item @g
s@<center>@\\begin{center}@g
s@</center><br>@\\end{center}@g
s@<br>@\\\\@g
s@ HEIGHT=[0-9]*@@g
s@ WIDTH=[0-9]*@@g
s@ ALIGN=bottom@@g
s@<img src="\([-_a-z]*\).gif">@\\imgsrc{\1.eps}@g
s@<img src="\([-_a-z]*\).jpeg">@\\imgsrc{\1.eps}@g
s@<font color=[a-z]*>@{\\bf @g
s@</font>@}@g
s@<a href="[^>]*">@@g
s@<[a-z]*>@@g
s@</[a-z]*>@@g
s@<\!#\([^#]*\)#>@\$\1\$@g
s@<\!{>[^!]*<\!}>@@g
s@<\!.*>@@g
s/&/\\&/g
s/_/\\_/g
s/%/\\%/g
s/θ/\\theta/g
s/π/\\pi/g
s/＜/</g
s/≦/\\leq/g
s/~/\\symbol{126}/g
s/\^/\\symbol{94}/g
}
s@^<pre>$@\\begin{verbatim}@g
s@^</pre>$@\\end{verbatim}@g
