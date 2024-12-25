import 'package:custom_cached_network_image/custom_cached_network_image.dart';
import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatefulWidget {
  const MyApp({super.key});

  @override
  State<MyApp> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {

  @override
  void initState() {
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Plugin example app'),
        ),
        body: CustomCachedNetworkImage(
          imageUrl: "http://via.placeholder.com/350x150",
          loadingWidget: CircularProgressIndicator(),
          placeholder: Icon(Icons.error),
        ),
      ),
    );
  }
}
