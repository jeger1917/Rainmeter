[CursorCalc]
Measure=Calc
Formula=(Counter % 12)+1
Paused=1

[Cursor]
Meter=Image
y=(#cursory# - 5)
x=(#cursorx# - 9)
ImageName=#@#ImagesFrames\CursorF[CursorCalc].png
DynamicVariables=1