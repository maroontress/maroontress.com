all: ja-icccm.ps

ja-icccm.ps: ja-icccm.dvi
	dvips ja-icccm.dvi > ja-icccm.ps

ja-icccm.dvi: \
	ChangeWindowAttributes.tex \
	ConfigureNotify.tex \
        ConfigureRequest.tex \
        FocusModels.tex \
        InitialState.tex \
        ManagerSelection.tex \
        PropertyType.tex \
        TargetAtoms.tex \
        UnmapNotify.tex \
        WM_CHANGE_STATE.tex \
        WM_HINTS.tex \
        WM_ICON_SIZE.tex \
        WM_NORMAL_HINTS.tex \
        WM_PROTOCOLS.tex \
        WM_STATE.tex \
        ja-icccm-chap2.tex \
        ja-icccm-chap4.tex \
        ja-icccm-chap6.tex \
	ja-icccm.ind \
        ja-icccm.tex
	platex ja-icccm.tex
	mendex ja-icccm.idx
