# Custom cached network image
A flutter library to show images from the internet and keep them in the cache directory.

## How to use

```dart
CustomCachedNetworkImage(
    imageUrl: "http://via.placeholder.com/350x150",
    loadingWidget: CircularProgressIndicator(),
    placeholder: Icon(Icons.error),
),
 ```

By default, CustomCachedNetworkImage caches an image with a size of 200 pixels.
To change the cache size you must change the value of minCacheSize and maxCacheSize.
If isThumb is true it will cache with the value of minCacheSize and vice versa maxCacheSize.
Default isThumb is true.
```dart
CustomCachedNetworkImage(
    imageUrl: "http://via.placeholder.com/350x150",
    loadingWidget: CircularProgressIndicator(),
    placeholder: Icon(Icons.error),
    minCacheSize: 200,
    maxCacheSize: 1000,
    isThumb: true,
),
 ```