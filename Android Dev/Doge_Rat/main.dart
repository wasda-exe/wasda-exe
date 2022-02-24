
import 'package:flutter/material.dart';

void main() => runApp(MaterialApp(
  theme: ThemeData(
    scaffoldBackgroundColor: Colors.black,
  ),
  home: Home(),
  //home property specifies what you will find on the home screen of your app
)
);


class Home extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
    appBar: AppBar(
    title: Text(
    'repent',
    style: TextStyle(
    color: Colors.black,
    ),
    ),
    centerTitle: true,
    backgroundColor: Colors.red[800],

    ),

    body:

    Center(

    child: new Column(
      mainAxisAlignment: MainAxisAlignment.center,
      children: [

        new Container(
          child: Image(
            image: AssetImage ('assets/fear - Copy.jpg')
          )
        ),


        new Container(
      child: Text(
    'Do you believe begging will save you?',
    style: TextStyle(
    fontFamily: 'Gideon Roman',
    fontSize: 20.0,
    fontWeight: FontWeight.bold,
    letterSpacing: 1.0,
    color: Colors.purple[700],
    ),
    ),
        ),


      ]
    ),
    ),
    floatingActionButton: FloatingActionButton(
    onPressed:() {},
  child: Text('beg?..'),
  backgroundColor: Colors.orange[900],
  ),
  );
  }
}

