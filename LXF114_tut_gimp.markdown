Tutorial Gimp Open source image-editing
Gimp
software you can get your teeth into
Gimp: Speedy
c
Smile big and show your colours as Michael J Hammel
guides you through quick colour fixes for your photos.
L
ast month I talked about the colour management tools
supported in Gimp. Colour management is all about
matching colours from input devices like cameras and
scanners to output devices like monitors and printers. Colour
adjustment, on the other hand, is a very different subject. The
colour adjustments I’m talking about this month are very specific
to editing your images in Gimp: blue instead of red, green instead
of yellow. If Red Hat were to be bought by Novell, all those Fedoras
would need to be changed to green, right? Gimp makes these
kinds of colour edits a quick and painless process. But while
they’re easy to perform, they take practice to get just right.
Each colour correction is made up of three important steps.
The first is to make a proper selection. This may be as simple as a
rectangular outline or as complex as the union of multiple
selections. Once the selection is created the next step is to feather
it – this will cause your colour adjustments to blend seamlessly
into their surroundings. Feathering is not optional when editing
photographs. Without feathering, you simply won’t be satisfied
with the results.
The last step is the most important: choosing the right colour
tool. There are no cut and dried rules for which tool will produce
the best results. In some cases desaturating the selection will be
required, while in other cases you’re better off just applying a
colour change directly to the coloured selection.
Part 1 Costume change
Our
expert
Michael J
Hammel is a
contributor to the
Gimp project and
the author of three
books on the
subject, including
his latest, The
Artist’s Guide to
Gimp Effects.
Imagine you sell T-shirts to college students. You need to find
which colours the students prefer. Should you buy different
coloured shirts and show them around? Maybe, but before you
start pulling from your not-yet-earned profits how about doing
some market research for a lot less money using Gimp?
Start with a photo of the type of shirts you plan to sell. This
stock photo might just be for the ladies’ version of the shirt but it
will do as an example. We start, as always, with a good selection.
Because this shirt has a high colour contrast with the rest of
the photo it is a good candidate for use with the Foreground
Selection tool. However, the thin straps and shadowed areas on
the left-hand side make require some fine-tuning. Once again, I’ll
clean the selection up with the Quick Mask tool. The Foreground
Selection tool uses a multi-step process to make its selection.
After choosing the tool from the toolbox, the first step is to drag a
rough outline around the item to be selected. This is just like
outlining it with the Free Select (aka Lasso) tool. Once this has
been done, the unselected area is tinted blue.
To fine-tune the initial rough selection a paint stroke is dragged
through the untinted region and over just the shirt. The purpose of
this paint stroke is to tell the Foreground Selection tool about the
colours to keep in the selection. Multiple paint strokes improve on
If you photograph your own models, put them in front of a
solid-coloured background that doesn’t match their clothing.
Last month We got technical with colour management for printing.
94 Linux Format January 2009
LXF114.tut_gimp 94
24/11/08 10:17:21 am
Gimp Tutorial
colour fixes
In tint mode the
selection looks
good, but finalizing
the selection
shows the left
side needs some
cleanup.
The colour of the tint used by Foreground Select can be
changed in the Tool Options dialog. You should make these
changes before you make your initial freehand selection.
the selection. You can adjust the size of the brush (which is shown
in the canvas as a circular outline) used for these paint strokes
using the Tool Options dialog.
The first stroke should use the default brush size. Start in the
upper-left strap and draw around the neckline, up into the other
strap, down the right-hand side of the shirt across the bottom, up
the left-hand side (just touching the shadow area, then across the
middle of the shirt). Because of the uniform colour tones in the
shirt this process creates a very accurate selection except for the
left-hand area of the shirt. Hit the Enter key to finalise the selection.
Switch to Quick Mask mode, zoom in and use a small brush on
the problem areas. Remember that painting with black removes
from the selection, while painting with white adds to it. You can
paint with other colours as well, but they just produce areas that
are partially selected, much the same way that the edges of a
selection are partially selected when you feather the selection.
However, you seldom use anything other than black or white when
working with Quick Mask.
After fixing the selection in Quick Mask mode, return to the
selection by clicking on the Quick Mask button again. Finally,
feather the selection by five pixels. You’re now ready to apply some
colour changes.
To recolour the shirt, first remove all colour content using
Colours > Desaturate. Choose the Lightness option (though any of
the three available options would suffice). To put the colour of your
choice back in, choose the Colourise dialog (Colours > Colourise)
and adjust the Hue level first. Fine-tuning of the colour occurs with
the Saturation and Lightness options.
You may need to select trickier areas by hand.
If you missed last issue Call 0870 837 4773 or +44 1858 438795.
January 2009 Linux Format     95
LXF114.tut_gimp 95
24/11/08 10:17:22 am
Tutorial Gimp
Part 2 Blue-eyed girl
Try going through this process but without feathering
the selection – you’ll see how artificial the effects are.
Why are we changing her eye colour? Because we can!
Experiment with
the replacement
eye colour until
you find the one
that works best.
This next example is similar to the first, in that I’ll remove colour
from a pair of lovely brown eyes before tinting them blue. The
stock photo is small, so I’m zooming in on the eyes. Zooming in
causes some pixellation, resulting in a slightly blocky appearance
in these screenshots, but it doesn’t make working on the image
any more difficult.
Start with the Free Select tool and draw an outline around the
left eye. I enable the Add mode in the Tool options, then draw a
second outline around the right eye. This is then converted to a
Quick Mask to clean up the outlines before converting it back to a
selection, just as we did in the first example. The selection is then
feathered by five pixels. Since we’re changing the brown eyes to
blue, reducing saturation won’t be enough. In fact, we want to
remove all saturation (all the colour) and replace it with blue. The
first step is to desature the selection using the Desaturate dialog
(Colours > Desaturate). I chose to desaturate using the Lightness
setting, though for this image at least, there is no visual difference
between the settings.
After desaturating, open the Foreground colour dialog by
clicking on the Foreground colour box in the Toolbox and select an
appropriate blue for the foreground colour. I set the HTML
Notation field to 153664. To colour the eyes, choose the Bucket Fill
tool from the Toolbox. In the Tool Options set the Mode to Dodge
and the Affected Area to Fill Whole Selection, then click inside the
canvas. The blue colour will be blended with the desaturated eyes.
The feathering will let this colouring fade toward the edges so you
don’t get any abrupt colour loss.
The choice of a Dodge blend mode for the Bucket Fill is
completely through experimentation. This process is extremely
simple, so repeated experiments with different shades of blue and
different blend modes is fast and simple. Remember: for projects
like this, Ctrl+Z (or Edit > Undo) is your friend.
The blend mode and colour used is very important. Review some photos from stock
websites for the colour of eyes you need and sample the colour from those images.
Never miss another issue Subscribe to the #1 source for Linux on page 52.
96     Linux Format January 2009
LXF114.tut_gimp 96
24/11/08 10:17:22 am
Gimp Tutorial
Part 3 Paint job
Initial selections aren’t complete – they leave many small
gaps. But these well-fed selections are ready for a little growth.
Keeping with the commercial theme, let’s now imagine you’re a
painter and you need to offer colour options to a home owner.
Throwing swathes of paint on the home probably won’t be an
option they’ll accept, so you choose to do it the Gimp way: select,
feather, colour.
Because of the snow sticking to the side of the house and
the bushes in front of it, the most suitable selection tool is the
Fuzzy Select tool. For this image the Tool Options Threshold is set
to 35 and the Add mode enabled. There are multiple blue walls to
include, each of which is bounded by a solid white border, so click
on each wall one at a time to add it to the selection.
Each wall selection is incomplete. There are small areas of
unselected wall we need to include in the final selection. This is
done by growing the selection a small amount. Open the Grow
Selection dialog and set the amount to one pixel, which is
sufficient for an image of this size. The selection still requires a few
light touches with the Quick Mask to unselect some of the bushes
in front of the house and add a few shadowed areas on the walls
that have not yet been included. The final selection is created
using the Airbrush tool instead of the Paintbrush when fine-tuning
the Quick Mask. This is so that the edges of the bushes and, most
especially, the barely visible tree branches are blended smoothly
with the colour changes. Remember that reflected light from the
house will slightly colour these items, so soft-edged selections are
required around them. Finally, the selection is feathered by five
pixels. Growing the selection gets most of the walls but it also
picks up some of the bushes, so for accuracy, Quick Mask must
be used for final adjustments.
To colour the selection we can use any of the previous
methods, but I found that using the Curves dialog provided the
best results. To turn the house a dark red, move the Blue and
Green curves down on the left-hand side while moving the Red
curve up on the left and down on the right. It may be hard to see in
this image, but snow was falling when the photo was taken and the
falling snow remained white but tinted red where it passed in front
of the house while the picture was snapped. LXF
Growing the
selection gets
most of the walls
but it also picks
up some of the
bushes – use
Quick Mask for
final adjustments.
Tutorial images
This month’s stock imagery can be found on
BigStockPhoto.com:
1 Costume Change
Beauty_Young_Sweaty_Woman_In_B_3535508
2 Blue Eyed Girl Spa_Girl___1892998
3 Paint Job House_292318
The snow remains white as it falls, tinted only slightly as it
passes in front of the house.
Next month Paths, layers and blurs combine to make a wine bottle. Glug!
January 2009 Linux Format     97
LXF114.tut_gimp 97
24/11/08 10:17:23 am

