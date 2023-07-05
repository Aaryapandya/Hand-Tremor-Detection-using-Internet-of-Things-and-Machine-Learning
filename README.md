# Hand Tremor Detection using Internet of Things and Machine Learning

# Introduction
In recent years, the use of wearable devices and sensors has gained popularity for monitoring and detecting physiological parameters. Tremors are one such parameter that can be monitored and detected using IoT devices. Patients can wear these devices and can continuously monitor tremors, providing valuable insights into the severity, frequency, and duration of the tremors. The accuracy and sensitivity of these devices have increased with the use of machine learning algorithms and data analytics approaches. The potential of IoT technology is used to enhance the lives of those with neurological conditions that cause hand tremors.

# Motivation
Hand tremors are a neurological condition characterized by involuntary shaking or rhythmic movements of the hands. It is a typical movement disorder that affects people of all ages and can significantly impact daily activities such as writing, eating, and dressing. Genetic predisposition, drug interactions, and underlying medical illnesses like Parkinson’s disease or essential tremors are only a few of the causes of hand tremors. A person’s quality of life may be greatly impacted, making simple activities like writing, eating, and dressing challenging. Various factors, including underlying medical conditions, medication side effects, and genetics can cause tremors.

# Technology Used
a)	Internet of Things: For the detection of hand tremors, MPU9250 sensors were used. We connected 3 sensors with Arduino Uno R3 board and recorded their readings simultaneously in Arduino Integrated Development Environment (IDE). First, we took readings of stable hand and denoted them with 0, then we took the readings when the hand is shaking and denoted those readings with 1. The total readings in the dataset are 27996. We stored the data in a csv file which was further processed by machine learning models.

b)	Machine Learning: As the dataset was divided in two classes 0 and 1 we used machine learning classifiers for training and testing. Four machine learning models were used, namely, Logistic Regression, Support Vector Classifier, K-Nearest Neighbour and Random Forest. Methods used for comparison of models are accuracy, precision, recall, f1-score and confusion matrix.  

# Result
Hand tremor detection using IoT presents a significant advancement in the field of healthcare technology. The integration of advanced sensors, such as accelerometers and gyroscopes, in wearable devices enables accurate detection and monitoring of hand tremors. These sensors capture and analyse motion data, facilitating real-time tremor detection and measurement. Random forest model gave the best accuracy of 99.68% while other models also performed decently. In conclusion, the results of the machine learning models suggest that it is possible to accurately classify hand movements based on sensor data from an MPU9250.
