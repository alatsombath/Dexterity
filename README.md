You can change the font, size, bar width and spacing, bar height, and number of bars through the "Edit variables" context menu option

When launching the skin for the first time, the number of bars is automatically adjusted based on your computer's CPU usage

When playing the track's album for the first time, the album art colors are retrieved from online sources and are then permanently stored (cached) in a separate variables file

On every skin launch, one random album art color is chosen out of three stored colors

If the album isn't on Last.FM, or if the track has incorrectly spelled metadata (tags), then the skin may not be able to retrieve the album art colors

Sometimes, you may also have to restart Rainmeter (not just the skin) due to the ridiculously long timeout nature of the WebParser plugin

Media player controls from [Google's Material Design icon set](https://github.com/google/material-design-icons)

Technical framework on retrieving the dominant album art colors: Uses [Last.FM's track metadata API](http://www.last.fm/api/show/album.getInfo) to find the current track's album art online and [Johannes Charman's YQL Open Data Table](http://www.datatables.org/data/jsonpost.xml) to send a POST request to [PhpFiddle's code execution API](http://phpfiddle.org/deposit/phpfiddle_apis.php), whose query contents include a [URL-encoded](http://meyerweb.com/eric/tools/dencoder/) [PHP-based cURL request](http://php.net/manual/en/curl.examples-basic.php) to the [Pictaculous color palette generator](http://pictaculous.com/api/)

![Preview](http://orig05.deviantart.net/79c7/f/2015/101/7/c/dexterity__nowplaying_display_for_rainmeter__by_alatsombath-d8pbv6m.png)
