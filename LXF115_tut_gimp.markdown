Tutorial Gimp Open source image-editing
Gimp
software you can get your teeth into
Gimp: A Bottle
Drawing with the Gimp is a ‘path’ you can only follow with a proper ‘guide’.
Michael J Hammel offers both in this design of a 3D wine bottle.
The grid will allow precise positioning of path control
points as well as precise editing of the path curves.
B
Our
expert
Michael J
Hammel
is a contributor to
the Gimp project
and the author of
three books on the
subject, including
his latest, The
Artist’s Guide to
Gimp Effects.
y now you’re all familiar with how Gimp can be used
with photo manipulation. In past issues I’ve talked
about using stock photography for graphic design and
showed how colour edits can make photos fit just about any
project. But photo editing is just one side of Gimp. We can, of
course, create graphics from scratch. And we can do it using
vector drawing.
In a nutshell, photo editing is raster editing, and drawing
with editable lines is vector editing. While I can draw using
either Wacom or Aiptek tablets and Gimp paint tools, this
month I want to show you how you can draw using nothing
more than guides, a grid and paths. Guides are straight lined
elements you drag from image window rulers that allow you
to accurately position points, bound selections or simply
trace with drawing tools. Paths are vector components of an
image that can be edited at any time to change their shape
using control points and drag handles. Path edits do not
immediately affect the image window – you have to retrace
the paths or convert them to selections for use in the image.
Paths are to drawing what layers are to photo editing. You
create multiple paths in a single path layer and then create
multiple path layers to create a drawing. Since paths are
editable curves – not just straight lines – they are perfect for
drawing manga or other types of cartoons. But like most
Gimp features, they aren’t limited to just cartoons. We’re
going to use them as the basis of a 3D shape.
This tutorial is for both new and experienced Gimp users
who haven’t yet ventured into the world of drawing from
scratch. You will need to have a basic knowledge of Gimp’s
windows – the toolbox, image windows and dialogs – though
I’ll provide menu locations where needed. You should be
familiar with creating new layers and naming them. You’ll get a
thorough understanding of how guides can perfectly align
your design elements, how drawings don’t have be done in
colour initially and how 3D effects are just a matter of lighting.
Get used to guides – this project uses plenty of them!
Last month We swapped colours selections and Gimp’s colour tools.
90 Linux Format February 2009
LXF115.tut_gimp 90
15/12/08 10:52:51 am
Gimp Tutorial
of wine
This is a two-part tutorial. In this first part I’ll design the
bottle and labels without any text. Next month I’ll add the
text, some graphic enhancements and a detailed bottle cap.
Drawing the bottle shape
Start with a new 800x600 image window (File > New). Gimp
supports a Snap To Grid feature that will be used along with
the guides. Configure the grid (Image > Configure Grid) to
use a spacing of 10x10 pixels and to use grid dots. Then
enable the Snap To Grid feature (View > Snap To Grid). The
grid should also be visible (View > Show Grid) when you’re
editing curves.
The bottle outline is created by first outlining the left half
and then duplicating and flipping this to create the right half.
The left half is drawn using a path. A set of guides are used to
precisely align the path control points. Four vertical and five
horizontal guides are required for this part of the drawing.
When placing multiple guides it is faster to use the tear-off
menus. Tear-off menus are only available from the Menu
Button in the upper-left of the image window, just below the
File menu option. All menus accessed from this button have a
dotted line at the top. Clicking on the dotted line tears off the
menu into its own window.
Guides can be precisely positioned using the Image >
Guides menu. The first vertical guide is placed in the exact
centre of the image window. Use the New Guides (By
Percent) option. Set the Direction to Vertical and the position
to 50. Additional vertical guides, created with the New Guide
option, should be positioned at 320, 340 and 370. Horizontal
guides should be positioned at 40, 200, 280, 520 and 560.
These positions (except the very first) are all pixel offsets.
Choose the Paths tool from the Toolbox. In the Tool
Options dialog make sure the Edit Mode is set to Design. In
the image window, click on the following guide intersections
(the vertical guide is listed first) to drop path control points:
400/40, 370/40, 370/200, 320/280, 320/520, 340/560,
400/560. This gives a straight edges outline that needs to be
rounded. In the Tool Options dialog set the Edit Mode to Edit.
Click and drag on the control point at the guides intersecting
at 370/200 to pull out the drag handles. Drag down three grid
dots and left one grid dot. Repeat for the control points at the
following grid intersections using the specified drag amounts:
320/280 (up 4 grid dots)
320/520 (down 3 grid dots)
340/560 (up 1 and left 2 grid dots)
In the Paths dialog, click on the path name to rename this
path ‘Left Border’ In the Tool Options dialog click on Selection
.
from Path.
The blur is kept
to 30 pixels so it
doesn’t spread
outside the width
of the bottle.
The finest wine known to humanity
The first handle is for the line coming into the control
point from the previous control, the second handle is for
the line leaving the control point.
Quick
tip
Grid dots are visible
in white areas of
the bottle. This isn’t
a bug, but rather
helps to see the
grid over the image
for alignment
purposes. You can
change the colour
of the dots, to
see them in dark
regions too, in the
Preferences dialog.
The shape is now outlined. Add a transparent layer (Layer >
New) and name this layer ‘Bottle Shape’ Fill the selection with
.
black. Copy the selection (Edit > Copy) and paste it (Edit >
Paste) as a new layer (Layer > New after pasting). Flip
horizontally this copied layer using the Flip tool from the
Toolbox. Use the Move tool and click and drag in the image
window to move this layer so that the left edge of the bottle in
If you missed last issue Call 0870 837 4773 or +44 1858 438795.
February 2009 Linux Format 91
LXF115.tut_gimp 91
15/12/08 10:52:51 am
Tutorial Gimp
this layer aligns with the right-hand edge of this bottle in the
Bottle Shape layer. This copied layer should be the active
layer (if not, click on the top layer in the Layers dialog to make
it active). Merge it with the Bottle Shape layer (Layers >
Merge Down).
Add highlights
Extruding the bottle into 3D comes next. This is done simply
by adding some lighting effects in the form of coloured filled
and blurred selections. Create a transparent layer and name
it Highlights-LeftBottle. Make sure this new layer is at the top
of the layer stack in the Layers dialog. The highlights require
six selections: two on the left-hand side of the body and the
neck of the bottle will act as reflected white light, and four on
the right-hand side will simulate light shining through the
bottle and its contents.
Choose the Rectangular Selection tool from the Toolbox.
Drag a selection in the image window starting at the
intersection of the guides at 340/280 and dragging to the
intersection of guides at 400/520. In the Tool Options dialog
change the Size to 40 x 240 and the Position to 350 x 280.
Place the mouse over the image window again and hit the
Enter key to accept the selection. Round the corners with the
Rounded Rectangle dialog (Select > Rounded Rectangle) set
to 70%. Fill the rectangle with white. Remove the selection
(Select > None). Apply a Gaussian Blur (Filters > Blur >
Gaussian Blur) that is 30 pixels in both the X and Y directions.
Reduce the layer opacity in the Layers dialog to 40%.
There are two right-hand side selections on the body of
the bottle. The first is the same width and height as the
highlight on the left-hand side and the second is just above
but smaller, round and rotated .
Create a transparent layer and name it Highlights-
RightBottle. Make sure this layer is at the top of the layer
stack. Create another selection just as you did for the left-
hand side highlight, but set the Position to 420 x 280. Round
the corners again. Click on the Foreground colour box in the
Toolbox and set the RGB values to 198/31/31, respectively.
Fill the selection and then remove it, but don’t blur yet. Set
the layer transparency to 40%.
Choose the Elliptical selection tool from the Toolbox.
Create an oval selection starting at the intersection of guides
at 340/200 to 400/280. In the Tool Options dialog set the
position to 400x210. Hit Enter in the image window to accept
this selection setting. Choose the Rotate tool from the
Toolbox. In the Tool Options dialog set the Transform option to
Selection. Click in the image window and in the Rotate dialog
that opens, set the Angle to -40 degrees, then click on the
Rotate button to rotate the selection. Shrink the selection
(Select > Shrink) by 10 pixels and feather it (Select > Feather)
by five pixels. Fill the selection with the same colour as the
previous selection then remove the selection. Finally,
Gaussian blur the layer by 30 pixels.
Throat shadows
You can create a more complex gradient with multiple levels of grey to give
the gold trim on the label a more sophisticated appearance.
The highlights in the bottle’s throat are made in a similar
fashion. Start with a transparent layer named Highlights-
Throat. Drag a rectangular selection from the intersection of
guides at 320/40 down to 340/200. In the Tool Options
change the size of the selection to 20 x 120 and the position
to 380x60. Round the selection, feather it by five pixels and fill
it with white. Remove the selection.
Repeat this selection on the same layer but set the
position to 408x60 and its size to 15 x 90. Feather again and
fill the selection with the red colour from the right-hand side
selections. Remove the selection. One more round selection
can be created directly below this last selection. Do this with
the Elliptical tool and position it manually. Turn off View >
Snap to Grid and View > Snap to Guides to accurately
position it manually. Feather and fill with the red colour again.
Remove the selection, then turn the Snap To options back on.
Finally, blur this entire layer by 20 pixels and set the layer
opacity to 40%.
What would a wine bottle be without its label? Boring, at
least. This bottle’s label will once again be outlined with
Never miss another issue Subscribe the #1 source for Linux on p102.
92 Linux Format February 2009
LXF115.tut_gimp 92
15/12/08 10:52:52 am
Gimp Tutorial
to 0 and apply these settings. Finally, apply a Levels
adjustment (Colour > Levels) by setting the Input Levels
midpoint value to 0.25. A thick blue stripe will add a little
colour to the label. We’ll make this like the white label, but a
little lower on the bottle. Start with a a transparent layer
named Blue Stripe. Again, make sure this new layer is placed
at the top of the layer stack. Create a rectangular selection
starting at the intersection at 320/450 and drag down and to
the right to the intersection at 480/515. Choose the Gradient
tool from the Toolbox. Choose the FG to BG (RGB) gradient
and make sure the reverse button is set. Make sure the Shape
is set to Bi-Linear. Drag on any horizontal guide starting at the
vertical guide at 370 and over to the left to the vertical guide
at 200.
Finally, use the Colourise dialog to paint the label a dark
blue. Set the Hue to 216, the Saturation to 77 and the Value to
-36. The choice of colour here is arbitrary. Any other settings
in the Colourise dialog will work just as well – It’s strictly a
matter of artistic preference.
Quick
tip
Like many artists,
I get my ideas from
others. This tutorial
is an extrapolation
to Gimp of a
Photoshop tutorial
found on
PSDFan.com.
Gold wrapper
Use whatever colours you like for the label – you’ll
probably want to avoid lime green though!
guides but created using some new tools: gradients and the
Colourise dialog.
Create a transparent layer named White Label and be
certain it sits at the top of the layer stack. Add vertical guides
positioned at offsets of 200, 480, and 600 pixels using the
New Guides dialog. Add horizontal guides at 340 and 410.
Choose the Rectangle Select tool from the Toolbox and drag a
selection from the guide intersection of 320/280 to 480/410.
Reset the Foreground and Background colours in the
Toolbox (click on the smaller boxes to the lower left of them).
Choose the Gradient tool from the Toolbox. In the Tool
Options set the Shape to Bi-Linear. Set the Gradient to ‘FG to
BG (RGB)’ and enable the Reverse button. In the image
window drag from the the guide intersection of 370/340 left
to the intersection at 200/340.
The last piece to be added to the wine bottle in this first part
of the tutorial is a gold wrapper along the bottle’s throat. Like
the white and blue labels, this wrapper is created with a
simple, coloured gradient.
Create a transparent layer named Gold Wrapper and
make sure it is positioned at the top of the layer stack. The
wrapper needs some new guides. Add a horizontal guide at
140 and vertical guides at 390 and 430. Create a selection
starting with the intersection at 370/40 and drag to 430/140.
Create a gradient using the same settings as the Blue Stripe
but drag left to right this time, from the vertical guide at 390
to the vertical guide at 430. Use Colourise with the Hue,
Saturation and Lightness set to 50, 86 and 0, respectively.
Finish this part of the tutorial by adjusting the Levels on this
selection, setting the Input Levels midpoint to 0.50. LXF
Gold trim
The white label will be edged with gold trim, which is created
in much the same way that the white label was created,
though with some colour added. Additionally, there will be
multiple pieces of trim. The trick with these will be to create
multiple, disconnected selections and apply the trim fill and
colouring all at once.
Create a transparent layer named Gold Trim and be
certain it sits at the top of the layer stack. The part of the
project needs four more horizontal guides. Using the New
Guide dialog once again, add horizontal guides at 415, 445,
450, and 515. Use the Rectangle Select tool to create a
selection starting at the intersection of 320/410 and dragging
to the right at intersection 480/415. In the Tool Options dialog
set the Mode to ‘Add’ (second icon from the left). Now create
selections 320/445 to 480/450 and 320/515 to 480/520.
This leaves three separate selections.
Use the Gradient tool with the same settings as the White
Label and drag from the horizontal guide at 370 left to the
guide at 200. Open the Colourise dialog (Colour > Colourise)
and set the Hue to 50, the Saturation to 86 and the Lightness
The choice of colour here is arbitrary. Any other settings in the Colourise
dialog will work just as well. It’s strictly a matter of artistic preference.
Next month We’ll add details to the label and create a cap.
February 2009 Linux Format 93
LXF115.tut_gimp 93
15/12/08 10:52:53 am

