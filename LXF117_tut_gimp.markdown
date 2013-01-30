Tutorial Gimp Open source image-editing
Gimp
software you can get your teeth into
Gimp: use other
Mixing raster, vector and text is easier than you think. Michael J Hammel
explains how to integrate Gimp with Inkscape, Scribus and OpenOffice.org.
Gimp’s Text tool provides a button for converting a text
layer to a path that can then be edited using the Path tool.
W
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
hile a vast number of desktop users are content to
work with the Gimp to produce images for the
web, many have more varied needs. Cartoonists
need vector support to tweak drawings, office workers need
images for presentations and desktop publishing requires
both. Gimp can fill the needs of all these users. In fact, Gimp
integrates easily with many desktop applications; the trick is
to understand the requirements of each application and the
reason we use them.
This month we’re going to learn how to integrate Gimp
with three popular Linux desktop tools: Inkscape, Scribus and
OpenOffice.org. We’ll learn how to use the exported output
from any one application with the Gimp and how each can
import Gimp images. Where applicable we’ll also discuss use
of drag and drop between applications.
A common thread in this discussion is file formats. Gimp
works with many formats, including GIF, JPEG, PNG and TIFF
and can import both PostScript and SVG vector formats.
While JPEG and GIF suffice for the web, TIFF or PNG are
better choices when working on print documents. PNG is also
preferable for digital presentations, because its lossless
format is better suited to dynamic scaling and it offers a
range of transparency effects. Where EXIF data from digital
cameras needs to be retained, the TIFF format is often the
best choice. TIFF is also preferred for work that needs to use
alternate colour spaces, such as CMYK. For vector formats,
SVG is the best option for export or import between multiple
applications, though support for PostScript import might be of
higher quality in some cases.
Another common issue is dpi settings. For the web and
digital presentations 72dpi or 96dpi is fine. However, if you’re
printing, consider the quality of the output. A low 150dpi will do
for a flyer for the local children’s choir, while the high-end
restaurant menu is better served by 300dpi.
Keep these common threads in mind as we explore the
integration of the Gimp with Inkscape, a popular open source
vector graphic illustration tool.
Gimp and Inkscape
Gimp does wonders with pixels, but working with text is often
more than pixel editing. The latest version of Gimp enables you
to transform a text layer into a path so that the text can be
manipulated manually, but this isn’t Gimp’s forte. It’s best to
leave it to a vector tool such as Inkscape.
Inkscape’s text management features are more extensive
than Gimp’s and enable easy creation of text along a curve
with kerning adjustments. We’ll now look at how to do this and
how to adjust the the spacing of the letters, before we move
the text into the Gimp.
Start up Inkscape and you’ll see a blank page. Now choose
the Text tool from the toolbar and type ‘Integrating Gimp with
Inkscape’ Use the Select tool to position the text in the centre
.
Last month We drank a toast to the completion of the wine bottle tutorial.
88 Linux Format April 2009
LXF117.tut_gimp 88
11/2/09 4:53:59 pm
Gimp Tutorial
tools
of the top half of the page. Next, choose the Bézier tool. Click
in the canvas once, then click again but drag before releasing
to create a curve. Release the mouse button, then click and
drag in one more spot. Release the mouse button and hit
Enter to complete the curve.
As a vector tool Inkscape creates objects, and selecting
these is similar to selecting a path in Gimp. Use the Select
tool and click on an object to select it. To place the text along
the curve, first choose the Select tool from the Toolbox and
then click on the text. Hold down the Shift key and click on
the curve. Now both objects are selected. Under the Text
menu at the top of the Inkscape window, choose ‘Put on Path’
.
The text is aligned from left to right along the curve.
The text on the path is still in vector format, so it can be
edited some more. First we must expand the space between
letters to flow the entire distance of the curve. Choose the
Text tool from the toolbar and then click anywhere in the text
object. Hold down the Alt key and use the < and > keys (and
possibly the Shift key, depending on your keyboard layout) to
proportionally decrease or increase the space between
letters. Adjusting space in this way is known as kerning. Note
that the space between letters is not exactly the same. The
space is adjusted based on the two letters that bound it. This
produces a more natural flow for the letters.
A leading question
While both Gimp and Inkscape can adjust letter spacing, only
Inkscape makes it easy to adjust the vertical positioning of
letters. Use the arrow keys to move the text cursor in front of
the ‘I’ in ‘Inkscape’ Hold down Shift and use the Right arrow to
.
select the letters ‘Ink’ Hold down the Alt key and then tap the
.
Up arrow 24 times. Still holding Alt, tap the Right arrow 15
times. The letters move vertically and to the right, positioned
above the remaining letters.
If no letters had been selected then all characters after the
text cursor would have been moved (try this to see what
happens to the ‘e’ in ‘Inkscape’!). Similarly, if there had been
multiple lines of text, the spacing between the lines could
have been edited using Ctrl+Alt and the < and > keys.
To move this curved text to Gimp, save it in Inkscape and
load the file into Gimp manually. We have to do this because
drag and drop between the two doesn’t work with a vector
text object, and the Inkscape project can’t be saved to file and
opened in Gimp as the text isn’t yet in a path format.
Ideally text should be in path format for use in Gimp. To do
this, select the text object in Inkscape then click on the Path >
Object To Path menu option. Now save the project to a file.
The default format for Inkscape project files is SVG, which is
what’s required for importing into Gimp.
Open the file in Gimp. Don’t worry about the Page Size
dialog that appears, as Inkscape’s default page size will
import to 744x1052 pixels at 90dpi. Note that once you
become more familiar with Inkscape you may want to make
In Inkscape,
the text can
be edited in
place and the
letter positions
can be edited
further either
independently or
as a group.
changes to the size of the image when opening it. More
important here is to make sure that the Import Paths option
in this dialog is set, but not the Merge Imported Paths option.
The former allows for the text to be imported as a path in the
Gimp, and having it in a path allows us to scale it without
losing the quality of the rendered text.
We can convert the path to a selection to fill it later on, or it
can be stroked after scaling. Don’t merge the paths from
Inkscape, because the curve itself (the curved line around
which the text is formed) is included with the curved text.
Half the job of migrating vector images from Inkscape to
Gimp is integrating these desktop tools. Inkscape can load
raster images created with Gimp. Since the images are linked
rather than embedded into an Inkscape project, changes
made to the Gimp image will cause the Inkscape project to be
updated the next time it’s reopened. It’s also possible to drag
Gimp layers directly into Inkscape, although doing so embeds
the image in the project file, with the consequence that later
updates to the layer won’t show up in the Inkscape file.
Vector artwork, such as cartoons, are often drawn using
tools such as Inkscape and painted in Gimp. The process for
migrating this from Inkscape to Gimp is similar to working
with text along a curve, without needing to convert the text an
object before saving the Inkscape project. Once imported, the
vector paths can be stroked or converted to a selection and
filled with solid colours, gradients and patterns. Making the
selection and filling it with a gradient is easier in the Gimp
because there’s no need to mask objects, as there would be if
the process were done in Inkscape.
The
default
Inkscape
toolbar is
a single
vertical row
on the left
of the main
window.
The tools
highlighted
are, from
top to
bottom,
the Select,
Bézier and
Text tools.
Gimp and Scribus
Scribus is a page layout tool, meaning it’s useful for creating
posters and flyers, among many other types of print media. It
benefits Gimp users in its support for duotone, tritone and
quadtone images – these are halftone images printed with
If you missed last issue Call 0870 837 4773 or +44 1858 438795.
April 2009 Linux Format     89
LXF117.tut_gimp 89
11/2/09 4:53:59 pm
Tutorial Gimp
This sort of
positioning of
individual or
subgroups of
letters cannot
be done in
Gimp without
fine-tuned path
editing. After
you’ve kerned
them, the letters
spread across
the length of the
curve.
two, three or four inks. A halftone image is a single-colour
image created with collections of dots. The primary purpose
of a duotone is to bring out midtone and highlights in an
image. Tritone and quadtone processes increase depth, effect
and quality. Duotone images are less expensive to produce in
large-quantity, high-quality print runs.
Scribus enables you to easily create this type of image and
can convert existing Gimp images likewise. Scribus starts
with a blank page, much like Inkscape. Click Insert > Insert
Image Frame to add a frame then drag through the page with
the mouse to size it. The initial size doesn’t matter, we’ll resize
it to fit the image in a moment.
Right-click in the image frame to open a menu. Select Get
Image, then choose an image saved from Gimp. Scribus
supports many raster formats including JPEG, PNG and TIFF.
For the purposes of this tutorial, the image shown is 237x238
When opening an SVG, choose to import paths but don’t merge them. This
allows scaling and rendering of the text without rendering the curve itself.
pixels. The image will be placed in the image frame but may
not fit exactly. Right-click on the image and select Adjust
Frame to Image to shrink or grow the frame as is appropriate
to fit the image.
Scribus provides a limited but powerful set of image
effects. In the same right-click menu, select Image Effects to
open the Image Effects dialog. Select Duotone and click on
the ‘>>’ button to add it as an effect. The Options area of the
dialog enables you to choose the two colours to use for the
duotone. To achieve good midtone and highlights, choose a
high-contrast set of colours, including one that’s black. To
reduce printing costs, pick pure Cyan, Magenta, Yellow or
Black. Tritone and Quadtone can be created in the same way.
Scribus makes integration with Gimp easy, however it’s a
one-way integration. By default, the Scribus external tool for
editing raster images is Gimp, but this can be changed in the
Preferences dialog. With the image converted to duotone, it
can be edited directly in the Gimp. In the right-click menu
choose Edit Image. Because the image is linked to the Scribus
document and not embedded in it, the image that’s opened is
the one saved to disk, so the duotone effect is not directly
editable in the Gimp. Instead, export the page to an image file
by clicking File > Export > Save As Image. While there’s a
method of exporting just the image object, it requires the use
of the Crop tool in the Gimp Toolbox to clip the duotone
image out of the exported image from Scribus.
Gimp and OpenOffice.org
OpenOffice.org is a collection of office applications for word
processing, basic drawing, presentations and spreadsheets.
Each one supports the use of raster image files in various
formats and with varying amounts of image editing features.
Layers from Gimp images can be dragged directly into all
of these applications. Dragging a layer embeds the graphic in
the OpenOffice.org application file. Alternatively, save a Gimp
image to any common raster file format, then manually open
it in an OpenOffice.org application. This process links the file
so that changes to the Gimp image are picked up the next
time OpenOffice.org is started.
If you drag layers into an OpenOffice.org application, the
dpi settings from the Gimp image aren’t imported. If you want
the dpi settings to be honoured by OpenOffice.org, save the
Gimp file to disk first.
There are no special tricks to using Gimp images in
OpenOffice.org applications, but a little imagination can make
using Gimp with OpenOffice.org more creative. For example,
This vector art from OpenClipart.org was imported from
SVG into Gimp. Selections and bi-linear gradients add depth.
Never miss another issue Subscribe to the #1 source for Linux on page 6.
90     Linux Format April 2009
LXF117.tut_gimp 90
11/2/09 4:54:0 pm
Gimp Tutorial
Scribus exports the
entire page as a single
layer using PNG or SVG,
even with multiple layers
in the Scribus document.
PNG may be easier to work
with since it provides a
solid white background.
Importing the image
is extremely easy with
a mature page layout
tool such as Scribus.
you can create various types of backgrounds with gradients,
outlines and patterns in Gimp and dragged into Impress
presentations on a slide-by-slide basis. Creative banners can
be added to Calc spreadsheets, and you can size to fit
cascading screenshots of desktop application windows for
print documentation using dpi settings in Gimp.
The Gimp’s editing features are far more extensive than
any of the OpenOffice.org applications alone provide – it’s a
matter of using the right tool for the job.
Draw is a less sophisticated graphics tool than Gimp, but it
does offer some interesting features. Any 2D graphic can be
quickly mapped to 3D in Draw, though the result is not always
ideal. Gimp’s Map Object filter is much slower and a bit less
interactive, but offers much higher-quality mapping on a
variety of shapes. But Draw is really useful to Gimp users
thanks to its predefined shapes. In Draw these shapes are in
vector format, which makes them easy to scale and modify.
Once the duotone effect is applied to the image frame, it
can be edited directly in the Gimp.
For example, Draw provides us with multiple types of callout
shapes – the small bubbles that are associated with
characters speaking in a comic strip. These shapes can be
sized without losing quality in Draw. To get them into Gimp
simply copy them in Draw by clicking Edit > Copy or pressing
Ctrl+C. Then paste them in a Gimp image window. This is a
much easier process than trying to hand-draw the somewhat
odd shapes provided by the callouts.
Summary
This month’s tutorial could be viewed as a laundry list of
things the Gimp can’t do, but this isn’t about missing features.
Instead it’s about using the right tool for the job. No single
tool does everything and in truth, no one really wants such an
application. Such a program would be unwieldy to use, with
so many buttons, toolbars, and windows. Instead, it’s better
to define a workflow into a series of tasks that can be
accomplished with a variety of tools, then merge it all
together at the end. Use OpenOffice.org and Scribus for
document layout and management and leave the graphic
design to tools like the Gimp and Inkscape. LXF
3D mapping is fast in Draw but its predefined shapes, like the callout and
puzzle piece shown here, are what attract Gimp users to the application.
Next month We’re turning simple effects into a classy advertising poster.
April 2009 Linux Format     91
LXF117.tut_gimp 91
11/2/09 4:54:1 pm

