{
  "__inputs": [
    {
      "name": "DS_MQTT_COPILOT",
      "label": "MQTT_copilot",
      "description": "",
      "type": "datasource",
      "pluginId": "grafana-mqtt-datasource",
      "pluginName": "MQTT"
    }
  ],
  "__elements": {},
  "__requires": [
    {
      "type": "panel",
      "id": "aidanmountford-html-panel",
      "name": "HTML",
      "version": "0.0.2"
    },
    {
      "type": "panel",
      "id": "briangann-gauge-panel",
      "name": "D3 Gauge",
      "version": "0.0.9"
    },
    {
      "type": "grafana",
      "id": "grafana",
      "name": "Grafana",
      "version": "9.4.7"
    },
    {
      "type": "datasource",
      "id": "grafana-mqtt-datasource",
      "name": "MQTT",
      "version": "1.0.0-beta.1"
    },
    {
      "type": "panel",
      "id": "stat",
      "name": "Stat",
      "version": ""
    },
    {
      "type": "panel",
      "id": "timeseries",
      "name": "Time series",
      "version": ""
    }
  ],
  "annotations": {
    "list": [
      {
        "builtIn": 1,
        "datasource": {
          "type": "grafana",
          "uid": "-- Grafana --"
        },
        "enable": true,
        "hide": true,
        "iconColor": "rgba(0, 211, 255, 1)",
        "name": "Annotations & Alerts",
        "target": {
          "limit": 100,
          "matchAny": false,
          "tags": [],
          "type": "dashboard"
        },
        "type": "dashboard"
      }
    ]
  },
  "editable": true,
  "fiscalYearStartMonth": 0,
  "graphTooltip": 0,
  "id": null,
  "links": [],
  "liveNow": false,
  "panels": [
    {
      "aliasColors": {},
      "css_data": "",
      "datasource": {
        "type": "datasource",
        "uid": "grafana"
      },
      "description": "",
      "doInit": {},
      "format": "short",
      "gridPos": {
        "h": 14,
        "w": 9,
        "x": 0,
        "y": 0
      },
      "handleMetric": {},
      "html_data": "<img style=\"display: block;-webkit-user-select: none;margin: auto;background-color: hsl(0, 0%, 90%);transition: background-color 300ms;\" src=\"http://192.168.1.149:8000/stream.mjpg\">",
      "id": 4,
      "js_code": "",
      "js_init_code": "",
      "links": [],
      "maxDataPoints": 3,
      "nullPointMode": "connected",
      "title": "Front Camera",
      "type": "aidanmountford-html-panel"
    },
    {
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "description": "",
      "fieldConfig": {
        "defaults": {
          "color": {
            "mode": "palette-classic"
          },
          "custom": {
            "axisCenteredZero": false,
            "axisColorMode": "text",
            "axisLabel": "",
            "axisPlacement": "auto",
            "barAlignment": 0,
            "drawStyle": "line",
            "fillOpacity": 0,
            "gradientMode": "none",
            "hideFrom": {
              "legend": false,
              "tooltip": false,
              "viz": false
            },
            "lineInterpolation": "linear",
            "lineWidth": 1,
            "pointSize": 5,
            "scaleDistribution": {
              "type": "linear"
            },
            "showPoints": "auto",
            "spanNulls": false,
            "stacking": {
              "group": "A",
              "mode": "none"
            },
            "thresholdsStyle": {
              "mode": "off"
            }
          },
          "mappings": [],
          "thresholds": {
            "mode": "absolute",
            "steps": [
              {
                "color": "green",
                "value": null
              },
              {
                "color": "red",
                "value": 80
              }
            ]
          }
        },
        "overrides": []
      },
      "gridPos": {
        "h": 6,
        "w": 15,
        "x": 9,
        "y": 0
      },
      "id": 8,
      "options": {
        "legend": {
          "calcs": [],
          "displayMode": "list",
          "placement": "bottom",
          "showLegend": true
        },
        "tooltip": {
          "mode": "single",
          "sort": "none"
        }
      },
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "A",
          "topic": "copilot/data/gyro/x"
        },
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "hide": false,
          "refId": "B",
          "topic": "copilot/data/gyro/y"
        },
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "hide": false,
          "refId": "C",
          "topic": "copilot/data/gyro/z"
        }
      ],
      "title": "Gyroscope XYZ",
      "type": "timeseries"
    },
    {
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "description": "",
      "fieldConfig": {
        "defaults": {
          "color": {
            "mode": "palette-classic"
          },
          "custom": {
            "axisCenteredZero": false,
            "axisColorMode": "text",
            "axisLabel": "",
            "axisPlacement": "auto",
            "barAlignment": 0,
            "drawStyle": "line",
            "fillOpacity": 0,
            "gradientMode": "none",
            "hideFrom": {
              "legend": false,
              "tooltip": false,
              "viz": false
            },
            "lineInterpolation": "linear",
            "lineWidth": 1,
            "pointSize": 5,
            "scaleDistribution": {
              "type": "linear"
            },
            "showPoints": "auto",
            "spanNulls": false,
            "stacking": {
              "group": "A",
              "mode": "none"
            },
            "thresholdsStyle": {
              "mode": "off"
            }
          },
          "mappings": [],
          "thresholds": {
            "mode": "absolute",
            "steps": [
              {
                "color": "green",
                "value": null
              },
              {
                "color": "red",
                "value": 80
              }
            ]
          }
        },
        "overrides": []
      },
      "gridPos": {
        "h": 6,
        "w": 15,
        "x": 9,
        "y": 6
      },
      "id": 2,
      "options": {
        "legend": {
          "calcs": [],
          "displayMode": "list",
          "placement": "bottom",
          "showLegend": true
        },
        "tooltip": {
          "mode": "single",
          "sort": "none"
        }
      },
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "A",
          "topic": "copilot/data/acceleration/x"
        },
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "hide": false,
          "refId": "B",
          "topic": "copilot/data/acceleration/y"
        },
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "hide": false,
          "refId": "C",
          "topic": "copilot/data/acceleration/z"
        }
      ],
      "title": "Acceleration XYZ",
      "type": "timeseries"
    },
    {
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "description": "",
      "fieldConfig": {
        "defaults": {
          "color": {
            "mode": "palette-classic"
          },
          "custom": {
            "axisCenteredZero": false,
            "axisColorMode": "text",
            "axisLabel": "",
            "axisPlacement": "auto",
            "barAlignment": 0,
            "drawStyle": "line",
            "fillOpacity": 0,
            "gradientMode": "none",
            "hideFrom": {
              "legend": false,
              "tooltip": false,
              "viz": false
            },
            "lineInterpolation": "linear",
            "lineWidth": 1,
            "pointSize": 5,
            "scaleDistribution": {
              "type": "linear"
            },
            "showPoints": "auto",
            "spanNulls": false,
            "stacking": {
              "group": "A",
              "mode": "none"
            },
            "thresholdsStyle": {
              "mode": "off"
            }
          },
          "mappings": [],
          "thresholds": {
            "mode": "absolute",
            "steps": [
              {
                "color": "green",
                "value": null
              },
              {
                "color": "red",
                "value": 80
              }
            ]
          }
        },
        "overrides": []
      },
      "gridPos": {
        "h": 6,
        "w": 15,
        "x": 9,
        "y": 12
      },
      "id": 13,
      "options": {
        "legend": {
          "calcs": [],
          "displayMode": "list",
          "placement": "bottom",
          "showLegend": true
        },
        "tooltip": {
          "mode": "single",
          "sort": "none"
        }
      },
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "X",
          "topic": "copilot/data/mag/x"
        },
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "hide": false,
          "refId": "Y",
          "topic": "copilot/data/mag/y"
        },
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "hide": false,
          "refId": "Z",
          "topic": "copilot/data/mag/z"
        }
      ],
      "title": "Magnetometer XYZ",
      "type": "timeseries"
    },
    {
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "fieldConfig": {
        "defaults": {
          "color": {
            "mode": "thresholds"
          },
          "mappings": [],
          "thresholds": {
            "mode": "absolute",
            "steps": [
              {
                "color": "green",
                "value": null
              },
              {
                "color": "#EAB839",
                "value": 25
              },
              {
                "color": "red",
                "value": 30
              }
            ]
          },
          "unit": "celsius"
        },
        "overrides": []
      },
      "gridPos": {
        "h": 4,
        "w": 3,
        "x": 0,
        "y": 14
      },
      "id": 14,
      "maxDataPoints": 1000,
      "options": {
        "colorMode": "value",
        "graphMode": "area",
        "justifyMode": "auto",
        "orientation": "auto",
        "reduceOptions": {
          "calcs": [
            "lastNotNull"
          ],
          "fields": "",
          "values": false
        },
        "textMode": "auto"
      },
      "pluginVersion": "9.4.7",
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "A",
          "topic": "copilot/data/gyro/temp"
        }
      ],
      "title": "Sensor Temperature",
      "type": "stat"
    },
    {
      "colors": [
        "rgba(245, 54, 54, 0.9)",
        "rgba(237, 129, 40, 0.89)",
        "rgba(50, 172, 45, 0.97)"
      ],
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "decimals": 1,
      "fontSizes": [
        4,
        5,
        6,
        7,
        8,
        9,
        10,
        11,
        12,
        13,
        14,
        15,
        16,
        17,
        18,
        19,
        20,
        22,
        24,
        26,
        28,
        30,
        32,
        34,
        36,
        38,
        40,
        42,
        44,
        46,
        48,
        50,
        52,
        54,
        56,
        58,
        60,
        62,
        64,
        66,
        68,
        70
      ],
      "fontTypes": [
        "Arial",
        "Avant Garde",
        "Bookman",
        "Consolas",
        "Courier",
        "Courier New",
        "Garamond",
        "Helvetica",
        "Open Sans",
        "Palatino",
        "Times",
        "Times New Roman",
        "Verdana"
      ],
      "format": "degree",
      "gauge": {
        "animateNeedleValueTransition": true,
        "animateNeedleValueTransitionSpeed": 100,
        "edgeWidth": 0.05,
        "gaugeRadius": 0,
        "gaugeUnits": "",
        "innerCol": "#fff",
        "labelFontSize": 18,
        "markerEndEnabled": true,
        "markerEndShape": {
          "$$hashKey": "object:56",
          "id": 0,
          "name": "arrow"
        },
        "markerStartEnabled": false,
        "markerStartShape": {
          "$$hashKey": "object:57",
          "id": 0,
          "name": "circle"
        },
        "maxNeedleAngle": 360,
        "maxTickAngle": 540,
        "maxValue": 360,
        "minValue": 0,
        "needleCol": "#0099CC",
        "needleLengthNeg": 0.2,
        "needleTickGap": 0.05,
        "needleWidth": 5,
        "outerEdgeCol": "#0099CC",
        "padding": 0.05,
        "pivotCol": "#999",
        "pivotRadius": 0.1,
        "show": true,
        "showLowerThresholdRange": false,
        "showMiddleThresholdRange": true,
        "showThresholdColorOnValue": false,
        "showThresholdOnGauge": false,
        "showUpperThresholdRange": true,
        "tickColMaj": "#0099CC",
        "tickColMin": "#000",
        "tickEdgeGap": 0.05,
        "tickFont": "Open Sans",
        "tickLabelCol": "#000",
        "tickLengthMaj": 0.15,
        "tickLengthMin": 0.05,
        "tickSpaceMajVal": 45,
        "tickSpaceMinVal": 1,
        "tickWidthMaj": 5,
        "tickWidthMin": 1,
        "ticknessGaugeBasis": 200,
        "unitsFont": "Open Sans",
        "unitsLabelCol": "#000",
        "unitsLabelFontSize": 22,
        "valueYOffset": -160,
        "zeroNeedleAngle": 0,
        "zeroTickAngle": 180
      },
      "gaugeDivId": "d3gauge_svg_17",
      "gridPos": {
        "h": 10,
        "w": 6,
        "x": 3,
        "y": 14
      },
      "id": 17,
      "mappingType": 1,
      "mappingTypes": [
        {
          "$$hashKey": "object:160",
          "name": "value to text",
          "value": 1
        },
        {
          "$$hashKey": "object:161",
          "name": "range to text",
          "value": 2
        }
      ],
      "markerEndShapes": [
        {
          "$$hashKey": "object:56",
          "id": 0,
          "name": "arrow"
        }
      ],
      "markerStartShapes": [
        {
          "$$hashKey": "object:57",
          "id": 0,
          "name": "circle"
        },
        {
          "$$hashKey": "object:58",
          "id": 1,
          "name": "square"
        },
        {
          "$$hashKey": "object:59",
          "id": 2,
          "name": "stub"
        }
      ],
      "maxDataPoints": 1000,
      "operatorName": "current",
      "operatorNameOptions": [
        "min",
        "max",
        "avg",
        "current",
        "total",
        "name"
      ],
      "pluginVersion": "9.4.7",
      "rangeMaps": [
        {
          "from": "null",
          "text": "N/A",
          "to": "null"
        }
      ],
      "svgContainer": {},
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "A",
          "topic": "copilot/data/mag/heading"
        }
      ],
      "thresholds": "",
      "tickMaps": [],
      "title": "Headning",
      "type": "briangann-gauge-panel",
      "unitFormats": [
        {
          "submenu": [
            {
              "click": "menuItemSelected(0,0)",
              "text": "Number",
              "value": "none"
            },
            {
              "click": "menuItemSelected(0,1)",
              "text": "String",
              "value": "string"
            },
            {
              "click": "menuItemSelected(0,2)",
              "text": "short",
              "value": "short"
            },
            {
              "click": "menuItemSelected(0,3)",
              "text": "Percent (0-100)",
              "value": "percent"
            },
            {
              "click": "menuItemSelected(0,4)",
              "text": "Percent (0.0-1.0)",
              "value": "percentunit"
            },
            {
              "click": "menuItemSelected(0,5)",
              "text": "Humidity (%H)",
              "value": "humidity"
            },
            {
              "click": "menuItemSelected(0,6)",
              "text": "Decibel",
              "value": "dB"
            },
            {
              "click": "menuItemSelected(0,7)",
              "text": "Hexadecimal (0x)",
              "value": "hex0x"
            },
            {
              "click": "menuItemSelected(0,8)",
              "text": "Hexadecimal",
              "value": "hex"
            },
            {
              "click": "menuItemSelected(0,9)",
              "text": "Scientific notation",
              "value": "sci"
            },
            {
              "click": "menuItemSelected(0,10)",
              "text": "Locale format",
              "value": "locale"
            },
            {
              "click": "menuItemSelected(0,11)",
              "text": "Pixels",
              "value": "pixel"
            }
          ],
          "text": "Misc"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(1,0)",
              "text": "Meters/sec²",
              "value": "accMS2"
            },
            {
              "click": "menuItemSelected(1,1)",
              "text": "Feet/sec²",
              "value": "accFS2"
            },
            {
              "click": "menuItemSelected(1,2)",
              "text": "G unit",
              "value": "accG"
            }
          ],
          "text": "Acceleration"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(2,0)",
              "text": "Degrees (°)",
              "value": "degree"
            },
            {
              "click": "menuItemSelected(2,1)",
              "text": "Radians",
              "value": "radian"
            },
            {
              "click": "menuItemSelected(2,2)",
              "text": "Gradian",
              "value": "grad"
            },
            {
              "click": "menuItemSelected(2,3)",
              "text": "Arc Minutes",
              "value": "arcmin"
            },
            {
              "click": "menuItemSelected(2,4)",
              "text": "Arc Seconds",
              "value": "arcsec"
            }
          ],
          "text": "Angle"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(3,0)",
              "text": "Square Meters (m²)",
              "value": "areaM2"
            },
            {
              "click": "menuItemSelected(3,1)",
              "text": "Square Feet (ft²)",
              "value": "areaF2"
            },
            {
              "click": "menuItemSelected(3,2)",
              "text": "Square Miles (mi²)",
              "value": "areaMI2"
            }
          ],
          "text": "Area"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(4,0)",
              "text": "FLOP/s",
              "value": "flops"
            },
            {
              "click": "menuItemSelected(4,1)",
              "text": "MFLOP/s",
              "value": "mflops"
            },
            {
              "click": "menuItemSelected(4,2)",
              "text": "GFLOP/s",
              "value": "gflops"
            },
            {
              "click": "menuItemSelected(4,3)",
              "text": "TFLOP/s",
              "value": "tflops"
            },
            {
              "click": "menuItemSelected(4,4)",
              "text": "PFLOP/s",
              "value": "pflops"
            },
            {
              "click": "menuItemSelected(4,5)",
              "text": "EFLOP/s",
              "value": "eflops"
            },
            {
              "click": "menuItemSelected(4,6)",
              "text": "ZFLOP/s",
              "value": "zflops"
            },
            {
              "click": "menuItemSelected(4,7)",
              "text": "YFLOP/s",
              "value": "yflops"
            }
          ],
          "text": "Computation"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(5,0)",
              "text": "parts-per-million (ppm)",
              "value": "ppm"
            },
            {
              "click": "menuItemSelected(5,1)",
              "text": "parts-per-billion (ppb)",
              "value": "conppb"
            },
            {
              "click": "menuItemSelected(5,2)",
              "text": "nanogram per cubic meter (ng/m³)",
              "value": "conngm3"
            },
            {
              "click": "menuItemSelected(5,3)",
              "text": "nanogram per normal cubic meter (ng/Nm³)",
              "value": "conngNm3"
            },
            {
              "click": "menuItemSelected(5,4)",
              "text": "microgram per cubic meter (μg/m³)",
              "value": "conμgm3"
            },
            {
              "click": "menuItemSelected(5,5)",
              "text": "microgram per normal cubic meter (μg/Nm³)",
              "value": "conμgNm3"
            },
            {
              "click": "menuItemSelected(5,6)",
              "text": "milligram per cubic meter (mg/m³)",
              "value": "conmgm3"
            },
            {
              "click": "menuItemSelected(5,7)",
              "text": "milligram per normal cubic meter (mg/Nm³)",
              "value": "conmgNm3"
            },
            {
              "click": "menuItemSelected(5,8)",
              "text": "gram per cubic meter (g/m³)",
              "value": "congm3"
            },
            {
              "click": "menuItemSelected(5,9)",
              "text": "gram per normal cubic meter (g/Nm³)",
              "value": "congNm3"
            },
            {
              "click": "menuItemSelected(5,10)",
              "text": "milligrams per decilitre (mg/dL)",
              "value": "conmgdL"
            },
            {
              "click": "menuItemSelected(5,11)",
              "text": "millimoles per litre (mmol/L)",
              "value": "conmmolL"
            }
          ],
          "text": "Concentration"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(6,0)",
              "text": "Dollars ($)",
              "value": "currencyUSD"
            },
            {
              "click": "menuItemSelected(6,1)",
              "text": "Pounds (£)",
              "value": "currencyGBP"
            },
            {
              "click": "menuItemSelected(6,2)",
              "text": "Euro (€)",
              "value": "currencyEUR"
            },
            {
              "click": "menuItemSelected(6,3)",
              "text": "Yen (¥)",
              "value": "currencyJPY"
            },
            {
              "click": "menuItemSelected(6,4)",
              "text": "Rubles (₽)",
              "value": "currencyRUB"
            },
            {
              "click": "menuItemSelected(6,5)",
              "text": "Hryvnias (₴)",
              "value": "currencyUAH"
            },
            {
              "click": "menuItemSelected(6,6)",
              "text": "Real (R$)",
              "value": "currencyBRL"
            },
            {
              "click": "menuItemSelected(6,7)",
              "text": "Danish Krone (kr)",
              "value": "currencyDKK"
            },
            {
              "click": "menuItemSelected(6,8)",
              "text": "Icelandic Króna (kr)",
              "value": "currencyISK"
            },
            {
              "click": "menuItemSelected(6,9)",
              "text": "Norwegian Krone (kr)",
              "value": "currencyNOK"
            },
            {
              "click": "menuItemSelected(6,10)",
              "text": "Swedish Krona (kr)",
              "value": "currencySEK"
            },
            {
              "click": "menuItemSelected(6,11)",
              "text": "Czech koruna (czk)",
              "value": "currencyCZK"
            },
            {
              "click": "menuItemSelected(6,12)",
              "text": "Swiss franc (CHF)",
              "value": "currencyCHF"
            },
            {
              "click": "menuItemSelected(6,13)",
              "text": "Polish Złoty (PLN)",
              "value": "currencyPLN"
            },
            {
              "click": "menuItemSelected(6,14)",
              "text": "Bitcoin (฿)",
              "value": "currencyBTC"
            },
            {
              "click": "menuItemSelected(6,15)",
              "text": "Milli Bitcoin (฿)",
              "value": "currencymBTC"
            },
            {
              "click": "menuItemSelected(6,16)",
              "text": "Micro Bitcoin (฿)",
              "value": "currencyμBTC"
            },
            {
              "click": "menuItemSelected(6,17)",
              "text": "South African Rand (R)",
              "value": "currencyZAR"
            },
            {
              "click": "menuItemSelected(6,18)",
              "text": "Indian Rupee (₹)",
              "value": "currencyINR"
            },
            {
              "click": "menuItemSelected(6,19)",
              "text": "South Korean Won (₩)",
              "value": "currencyKRW"
            },
            {
              "click": "menuItemSelected(6,20)",
              "text": "Indonesian Rupiah (Rp)",
              "value": "currencyIDR"
            },
            {
              "click": "menuItemSelected(6,21)",
              "text": "Philippine Peso (PHP)",
              "value": "currencyPHP"
            },
            {
              "click": "menuItemSelected(6,22)",
              "text": "Vietnamese Dong (VND)",
              "value": "currencyVND"
            }
          ],
          "text": "Currency"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(7,0)",
              "text": "bytes(IEC)",
              "value": "bytes"
            },
            {
              "click": "menuItemSelected(7,1)",
              "text": "bytes(SI)",
              "value": "decbytes"
            },
            {
              "click": "menuItemSelected(7,2)",
              "text": "bits(IEC)",
              "value": "bits"
            },
            {
              "click": "menuItemSelected(7,3)",
              "text": "bits(SI)",
              "value": "decbits"
            },
            {
              "click": "menuItemSelected(7,4)",
              "text": "kibibytes",
              "value": "kbytes"
            },
            {
              "click": "menuItemSelected(7,5)",
              "text": "kilobytes",
              "value": "deckbytes"
            },
            {
              "click": "menuItemSelected(7,6)",
              "text": "mebibytes",
              "value": "mbytes"
            },
            {
              "click": "menuItemSelected(7,7)",
              "text": "megabytes",
              "value": "decmbytes"
            },
            {
              "click": "menuItemSelected(7,8)",
              "text": "gibibytes",
              "value": "gbytes"
            },
            {
              "click": "menuItemSelected(7,9)",
              "text": "gigabytes",
              "value": "decgbytes"
            },
            {
              "click": "menuItemSelected(7,10)",
              "text": "tebibytes",
              "value": "tbytes"
            },
            {
              "click": "menuItemSelected(7,11)",
              "text": "terabytes",
              "value": "dectbytes"
            },
            {
              "click": "menuItemSelected(7,12)",
              "text": "pebibytes",
              "value": "pbytes"
            },
            {
              "click": "menuItemSelected(7,13)",
              "text": "petabytes",
              "value": "decpbytes"
            }
          ],
          "text": "Data"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(8,0)",
              "text": "packets/sec",
              "value": "pps"
            },
            {
              "click": "menuItemSelected(8,1)",
              "text": "bytes/sec(IEC)",
              "value": "binBps"
            },
            {
              "click": "menuItemSelected(8,2)",
              "text": "bytes/sec(SI)",
              "value": "Bps"
            },
            {
              "click": "menuItemSelected(8,3)",
              "text": "bits/sec(IEC)",
              "value": "binbps"
            },
            {
              "click": "menuItemSelected(8,4)",
              "text": "bits/sec(SI)",
              "value": "bps"
            },
            {
              "click": "menuItemSelected(8,5)",
              "text": "kibibytes/sec",
              "value": "KiBs"
            },
            {
              "click": "menuItemSelected(8,6)",
              "text": "kibibits/sec",
              "value": "Kibits"
            },
            {
              "click": "menuItemSelected(8,7)",
              "text": "kilobytes/sec",
              "value": "KBs"
            },
            {
              "click": "menuItemSelected(8,8)",
              "text": "kilobits/sec",
              "value": "Kbits"
            },
            {
              "click": "menuItemSelected(8,9)",
              "text": "mebibytes/sec",
              "value": "MiBs"
            },
            {
              "click": "menuItemSelected(8,10)",
              "text": "mebibits/sec",
              "value": "Mibits"
            },
            {
              "click": "menuItemSelected(8,11)",
              "text": "megabytes/sec",
              "value": "MBs"
            },
            {
              "click": "menuItemSelected(8,12)",
              "text": "megabits/sec",
              "value": "Mbits"
            },
            {
              "click": "menuItemSelected(8,13)",
              "text": "gibibytes/sec",
              "value": "GiBs"
            },
            {
              "click": "menuItemSelected(8,14)",
              "text": "gibibits/sec",
              "value": "Gibits"
            },
            {
              "click": "menuItemSelected(8,15)",
              "text": "gigabytes/sec",
              "value": "GBs"
            },
            {
              "click": "menuItemSelected(8,16)",
              "text": "gigabits/sec",
              "value": "Gbits"
            },
            {
              "click": "menuItemSelected(8,17)",
              "text": "tebibytes/sec",
              "value": "TiBs"
            },
            {
              "click": "menuItemSelected(8,18)",
              "text": "tebibits/sec",
              "value": "Tibits"
            },
            {
              "click": "menuItemSelected(8,19)",
              "text": "terabytes/sec",
              "value": "TBs"
            },
            {
              "click": "menuItemSelected(8,20)",
              "text": "terabits/sec",
              "value": "Tbits"
            },
            {
              "click": "menuItemSelected(8,21)",
              "text": "pebibytes/sec",
              "value": "PiBs"
            },
            {
              "click": "menuItemSelected(8,22)",
              "text": "pebibits/sec",
              "value": "Pibits"
            },
            {
              "click": "menuItemSelected(8,23)",
              "text": "petabytes/sec",
              "value": "PBs"
            },
            {
              "click": "menuItemSelected(8,24)",
              "text": "petabits/sec",
              "value": "Pbits"
            }
          ],
          "text": "Data rate"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(9,0)",
              "text": "Datetime ISO",
              "value": "dateTimeAsIso"
            },
            {
              "click": "menuItemSelected(9,1)",
              "text": "Datetime ISO (No date if today)",
              "value": "dateTimeAsIsoNoDateIfToday"
            },
            {
              "click": "menuItemSelected(9,2)",
              "text": "Datetime US",
              "value": "dateTimeAsUS"
            },
            {
              "click": "menuItemSelected(9,3)",
              "text": "Datetime US (No date if today)",
              "value": "dateTimeAsUSNoDateIfToday"
            },
            {
              "click": "menuItemSelected(9,4)",
              "text": "Datetime local",
              "value": "dateTimeAsLocal"
            },
            {
              "click": "menuItemSelected(9,5)",
              "text": "Datetime local (No date if today)",
              "value": "dateTimeAsLocalNoDateIfToday"
            },
            {
              "click": "menuItemSelected(9,6)",
              "text": "Datetime default",
              "value": "dateTimeAsSystem"
            },
            {
              "click": "menuItemSelected(9,7)",
              "text": "From Now",
              "value": "dateTimeFromNow"
            }
          ],
          "text": "Date & time"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(10,0)",
              "text": "Watt (W)",
              "value": "watt"
            },
            {
              "click": "menuItemSelected(10,1)",
              "text": "Kilowatt (kW)",
              "value": "kwatt"
            },
            {
              "click": "menuItemSelected(10,2)",
              "text": "Megawatt (MW)",
              "value": "megwatt"
            },
            {
              "click": "menuItemSelected(10,3)",
              "text": "Gigawatt (GW)",
              "value": "gwatt"
            },
            {
              "click": "menuItemSelected(10,4)",
              "text": "Milliwatt (mW)",
              "value": "mwatt"
            },
            {
              "click": "menuItemSelected(10,5)",
              "text": "Watt per square meter (W/m²)",
              "value": "Wm2"
            },
            {
              "click": "menuItemSelected(10,6)",
              "text": "Volt-Ampere (VA)",
              "value": "voltamp"
            },
            {
              "click": "menuItemSelected(10,7)",
              "text": "Kilovolt-Ampere (kVA)",
              "value": "kvoltamp"
            },
            {
              "click": "menuItemSelected(10,8)",
              "text": "Volt-Ampere reactive (VAr)",
              "value": "voltampreact"
            },
            {
              "click": "menuItemSelected(10,9)",
              "text": "Kilovolt-Ampere reactive (kVAr)",
              "value": "kvoltampreact"
            },
            {
              "click": "menuItemSelected(10,10)",
              "text": "Watt-hour (Wh)",
              "value": "watth"
            },
            {
              "click": "menuItemSelected(10,11)",
              "text": "Watt-hour per Kilogram (Wh/kg)",
              "value": "watthperkg"
            },
            {
              "click": "menuItemSelected(10,12)",
              "text": "Kilowatt-hour (kWh)",
              "value": "kwatth"
            },
            {
              "click": "menuItemSelected(10,13)",
              "text": "Kilowatt-min (kWm)",
              "value": "kwattm"
            },
            {
              "click": "menuItemSelected(10,14)",
              "text": "Ampere-hour (Ah)",
              "value": "amph"
            },
            {
              "click": "menuItemSelected(10,15)",
              "text": "Kiloampere-hour (kAh)",
              "value": "kamph"
            },
            {
              "click": "menuItemSelected(10,16)",
              "text": "Milliampere-hour (mAh)",
              "value": "mamph"
            },
            {
              "click": "menuItemSelected(10,17)",
              "text": "Joule (J)",
              "value": "joule"
            },
            {
              "click": "menuItemSelected(10,18)",
              "text": "Electron volt (eV)",
              "value": "ev"
            },
            {
              "click": "menuItemSelected(10,19)",
              "text": "Ampere (A)",
              "value": "amp"
            },
            {
              "click": "menuItemSelected(10,20)",
              "text": "Kiloampere (kA)",
              "value": "kamp"
            },
            {
              "click": "menuItemSelected(10,21)",
              "text": "Milliampere (mA)",
              "value": "mamp"
            },
            {
              "click": "menuItemSelected(10,22)",
              "text": "Volt (V)",
              "value": "volt"
            },
            {
              "click": "menuItemSelected(10,23)",
              "text": "Kilovolt (kV)",
              "value": "kvolt"
            },
            {
              "click": "menuItemSelected(10,24)",
              "text": "Millivolt (mV)",
              "value": "mvolt"
            },
            {
              "click": "menuItemSelected(10,25)",
              "text": "Decibel-milliwatt (dBm)",
              "value": "dBm"
            },
            {
              "click": "menuItemSelected(10,26)",
              "text": "Ohm (Ω)",
              "value": "ohm"
            },
            {
              "click": "menuItemSelected(10,27)",
              "text": "Kiloohm (kΩ)",
              "value": "kohm"
            },
            {
              "click": "menuItemSelected(10,28)",
              "text": "Megaohm (MΩ)",
              "value": "Mohm"
            },
            {
              "click": "menuItemSelected(10,29)",
              "text": "Farad (F)",
              "value": "farad"
            },
            {
              "click": "menuItemSelected(10,30)",
              "text": "Microfarad (µF)",
              "value": "µfarad"
            },
            {
              "click": "menuItemSelected(10,31)",
              "text": "Nanofarad (nF)",
              "value": "nfarad"
            },
            {
              "click": "menuItemSelected(10,32)",
              "text": "Picofarad (pF)",
              "value": "pfarad"
            },
            {
              "click": "menuItemSelected(10,33)",
              "text": "Femtofarad (fF)",
              "value": "ffarad"
            },
            {
              "click": "menuItemSelected(10,34)",
              "text": "Henry (H)",
              "value": "henry"
            },
            {
              "click": "menuItemSelected(10,35)",
              "text": "Millihenry (mH)",
              "value": "mhenry"
            },
            {
              "click": "menuItemSelected(10,36)",
              "text": "Microhenry (µH)",
              "value": "µhenry"
            },
            {
              "click": "menuItemSelected(10,37)",
              "text": "Lumens (Lm)",
              "value": "lumens"
            }
          ],
          "text": "Energy"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(11,0)",
              "text": "Gallons/min (gpm)",
              "value": "flowgpm"
            },
            {
              "click": "menuItemSelected(11,1)",
              "text": "Cubic meters/sec (cms)",
              "value": "flowcms"
            },
            {
              "click": "menuItemSelected(11,2)",
              "text": "Cubic feet/sec (cfs)",
              "value": "flowcfs"
            },
            {
              "click": "menuItemSelected(11,3)",
              "text": "Cubic feet/min (cfm)",
              "value": "flowcfm"
            },
            {
              "click": "menuItemSelected(11,4)",
              "text": "Litre/hour",
              "value": "litreh"
            },
            {
              "click": "menuItemSelected(11,5)",
              "text": "Litre/min (L/min)",
              "value": "flowlpm"
            },
            {
              "click": "menuItemSelected(11,6)",
              "text": "milliLitre/min (mL/min)",
              "value": "flowmlpm"
            },
            {
              "click": "menuItemSelected(11,7)",
              "text": "Lux (lx)",
              "value": "lux"
            }
          ],
          "text": "Flow"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(12,0)",
              "text": "Newton-meters (Nm)",
              "value": "forceNm"
            },
            {
              "click": "menuItemSelected(12,1)",
              "text": "Kilonewton-meters (kNm)",
              "value": "forcekNm"
            },
            {
              "click": "menuItemSelected(12,2)",
              "text": "Newtons (N)",
              "value": "forceN"
            },
            {
              "click": "menuItemSelected(12,3)",
              "text": "Kilonewtons (kN)",
              "value": "forcekN"
            }
          ],
          "text": "Force"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(13,0)",
              "text": "hashes/sec",
              "value": "Hs"
            },
            {
              "click": "menuItemSelected(13,1)",
              "text": "kilohashes/sec",
              "value": "KHs"
            },
            {
              "click": "menuItemSelected(13,2)",
              "text": "megahashes/sec",
              "value": "MHs"
            },
            {
              "click": "menuItemSelected(13,3)",
              "text": "gigahashes/sec",
              "value": "GHs"
            },
            {
              "click": "menuItemSelected(13,4)",
              "text": "terahashes/sec",
              "value": "THs"
            },
            {
              "click": "menuItemSelected(13,5)",
              "text": "petahashes/sec",
              "value": "PHs"
            },
            {
              "click": "menuItemSelected(13,6)",
              "text": "exahashes/sec",
              "value": "EHs"
            }
          ],
          "text": "Hash rate"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(14,0)",
              "text": "milligram (mg)",
              "value": "massmg"
            },
            {
              "click": "menuItemSelected(14,1)",
              "text": "gram (g)",
              "value": "massg"
            },
            {
              "click": "menuItemSelected(14,2)",
              "text": "pound (lb)",
              "value": "masslb"
            },
            {
              "click": "menuItemSelected(14,3)",
              "text": "kilogram (kg)",
              "value": "masskg"
            },
            {
              "click": "menuItemSelected(14,4)",
              "text": "metric ton (t)",
              "value": "masst"
            }
          ],
          "text": "Mass"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(15,0)",
              "text": "millimeter (mm)",
              "value": "lengthmm"
            },
            {
              "click": "menuItemSelected(15,1)",
              "text": "inch (in)",
              "value": "lengthin"
            },
            {
              "click": "menuItemSelected(15,2)",
              "text": "feet (ft)",
              "value": "lengthft"
            },
            {
              "click": "menuItemSelected(15,3)",
              "text": "meter (m)",
              "value": "lengthm"
            },
            {
              "click": "menuItemSelected(15,4)",
              "text": "kilometer (km)",
              "value": "lengthkm"
            },
            {
              "click": "menuItemSelected(15,5)",
              "text": "mile (mi)",
              "value": "lengthmi"
            }
          ],
          "text": "Length"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(16,0)",
              "text": "Millibars",
              "value": "pressurembar"
            },
            {
              "click": "menuItemSelected(16,1)",
              "text": "Bars",
              "value": "pressurebar"
            },
            {
              "click": "menuItemSelected(16,2)",
              "text": "Kilobars",
              "value": "pressurekbar"
            },
            {
              "click": "menuItemSelected(16,3)",
              "text": "Pascals",
              "value": "pressurepa"
            },
            {
              "click": "menuItemSelected(16,4)",
              "text": "Hectopascals",
              "value": "pressurehpa"
            },
            {
              "click": "menuItemSelected(16,5)",
              "text": "Kilopascals",
              "value": "pressurekpa"
            },
            {
              "click": "menuItemSelected(16,6)",
              "text": "Inches of mercury",
              "value": "pressurehg"
            },
            {
              "click": "menuItemSelected(16,7)",
              "text": "PSI",
              "value": "pressurepsi"
            }
          ],
          "text": "Pressure"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(17,0)",
              "text": "Becquerel (Bq)",
              "value": "radbq"
            },
            {
              "click": "menuItemSelected(17,1)",
              "text": "curie (Ci)",
              "value": "radci"
            },
            {
              "click": "menuItemSelected(17,2)",
              "text": "Gray (Gy)",
              "value": "radgy"
            },
            {
              "click": "menuItemSelected(17,3)",
              "text": "rad",
              "value": "radrad"
            },
            {
              "click": "menuItemSelected(17,4)",
              "text": "Sievert (Sv)",
              "value": "radsv"
            },
            {
              "click": "menuItemSelected(17,5)",
              "text": "milliSievert (mSv)",
              "value": "radmsv"
            },
            {
              "click": "menuItemSelected(17,6)",
              "text": "microSievert (µSv)",
              "value": "radusv"
            },
            {
              "click": "menuItemSelected(17,7)",
              "text": "rem",
              "value": "radrem"
            },
            {
              "click": "menuItemSelected(17,8)",
              "text": "Exposure (C/kg)",
              "value": "radexpckg"
            },
            {
              "click": "menuItemSelected(17,9)",
              "text": "roentgen (R)",
              "value": "radr"
            },
            {
              "click": "menuItemSelected(17,10)",
              "text": "Sievert/hour (Sv/h)",
              "value": "radsvh"
            },
            {
              "click": "menuItemSelected(17,11)",
              "text": "milliSievert/hour (mSv/h)",
              "value": "radmsvh"
            },
            {
              "click": "menuItemSelected(17,12)",
              "text": "microSievert/hour (µSv/h)",
              "value": "radusvh"
            }
          ],
          "text": "Radiation"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(18,0)",
              "text": "Revolutions per minute (rpm)",
              "value": "rotrpm"
            },
            {
              "click": "menuItemSelected(18,1)",
              "text": "Hertz (Hz)",
              "value": "rothz"
            },
            {
              "click": "menuItemSelected(18,2)",
              "text": "Radians per second (rad/s)",
              "value": "rotrads"
            },
            {
              "click": "menuItemSelected(18,3)",
              "text": "Degrees per second (°/s)",
              "value": "rotdegs"
            }
          ],
          "text": "Rotational Speed"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(19,0)",
              "text": "Celsius (°C)",
              "value": "celsius"
            },
            {
              "click": "menuItemSelected(19,1)",
              "text": "Fahrenheit (°F)",
              "value": "fahrenheit"
            },
            {
              "click": "menuItemSelected(19,2)",
              "text": "Kelvin (K)",
              "value": "kelvin"
            }
          ],
          "text": "Temperature"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(20,0)",
              "text": "Hertz (1/s)",
              "value": "hertz"
            },
            {
              "click": "menuItemSelected(20,1)",
              "text": "nanoseconds (ns)",
              "value": "ns"
            },
            {
              "click": "menuItemSelected(20,2)",
              "text": "microseconds (µs)",
              "value": "µs"
            },
            {
              "click": "menuItemSelected(20,3)",
              "text": "milliseconds (ms)",
              "value": "ms"
            },
            {
              "click": "menuItemSelected(20,4)",
              "text": "seconds (s)",
              "value": "s"
            },
            {
              "click": "menuItemSelected(20,5)",
              "text": "minutes (m)",
              "value": "m"
            },
            {
              "click": "menuItemSelected(20,6)",
              "text": "hours (h)",
              "value": "h"
            },
            {
              "click": "menuItemSelected(20,7)",
              "text": "days (d)",
              "value": "d"
            },
            {
              "click": "menuItemSelected(20,8)",
              "text": "duration (ms)",
              "value": "dtdurationms"
            },
            {
              "click": "menuItemSelected(20,9)",
              "text": "duration (s)",
              "value": "dtdurations"
            },
            {
              "click": "menuItemSelected(20,10)",
              "text": "duration (hh:mm:ss)",
              "value": "dthms"
            },
            {
              "click": "menuItemSelected(20,11)",
              "text": "duration (d hh:mm:ss)",
              "value": "dtdhms"
            },
            {
              "click": "menuItemSelected(20,12)",
              "text": "Timeticks (s/100)",
              "value": "timeticks"
            },
            {
              "click": "menuItemSelected(20,13)",
              "text": "clock (ms)",
              "value": "clockms"
            },
            {
              "click": "menuItemSelected(20,14)",
              "text": "clock (s)",
              "value": "clocks"
            }
          ],
          "text": "Time"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(21,0)",
              "text": "counts/sec (cps)",
              "value": "cps"
            },
            {
              "click": "menuItemSelected(21,1)",
              "text": "ops/sec (ops)",
              "value": "ops"
            },
            {
              "click": "menuItemSelected(21,2)",
              "text": "requests/sec (rps)",
              "value": "reqps"
            },
            {
              "click": "menuItemSelected(21,3)",
              "text": "reads/sec (rps)",
              "value": "rps"
            },
            {
              "click": "menuItemSelected(21,4)",
              "text": "writes/sec (wps)",
              "value": "wps"
            },
            {
              "click": "menuItemSelected(21,5)",
              "text": "I/O ops/sec (iops)",
              "value": "iops"
            },
            {
              "click": "menuItemSelected(21,6)",
              "text": "counts/min (cpm)",
              "value": "cpm"
            },
            {
              "click": "menuItemSelected(21,7)",
              "text": "ops/min (opm)",
              "value": "opm"
            },
            {
              "click": "menuItemSelected(21,8)",
              "text": "reads/min (rpm)",
              "value": "rpm"
            },
            {
              "click": "menuItemSelected(21,9)",
              "text": "writes/min (wpm)",
              "value": "wpm"
            }
          ],
          "text": "Throughput"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(22,0)",
              "text": "meters/second (m/s)",
              "value": "velocityms"
            },
            {
              "click": "menuItemSelected(22,1)",
              "text": "kilometers/hour (km/h)",
              "value": "velocitykmh"
            },
            {
              "click": "menuItemSelected(22,2)",
              "text": "miles/hour (mph)",
              "value": "velocitymph"
            },
            {
              "click": "menuItemSelected(22,3)",
              "text": "knot (kn)",
              "value": "velocityknot"
            }
          ],
          "text": "Velocity"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(23,0)",
              "text": "millilitre (mL)",
              "value": "mlitre"
            },
            {
              "click": "menuItemSelected(23,1)",
              "text": "litre (L)",
              "value": "litre"
            },
            {
              "click": "menuItemSelected(23,2)",
              "text": "cubic meter",
              "value": "m3"
            },
            {
              "click": "menuItemSelected(23,3)",
              "text": "Normal cubic meter",
              "value": "Nm3"
            },
            {
              "click": "menuItemSelected(23,4)",
              "text": "cubic decimeter",
              "value": "dm3"
            },
            {
              "click": "menuItemSelected(23,5)",
              "text": "gallons",
              "value": "gallons"
            }
          ],
          "text": "Volume"
        },
        {
          "submenu": [
            {
              "click": "menuItemSelected(24,0)",
              "text": "True / False",
              "value": "bool"
            },
            {
              "click": "menuItemSelected(24,1)",
              "text": "Yes / No",
              "value": "bool_yes_no"
            },
            {
              "click": "menuItemSelected(24,2)",
              "text": "On / Off",
              "value": "bool_on_off"
            }
          ],
          "text": "Boolean"
        }
      ],
      "valueMaps": [
        {
          "$$hashKey": "object:163",
          "op": "=",
          "text": "N/A",
          "value": "null"
        }
      ]
    },
    {
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "fieldConfig": {
        "defaults": {
          "color": {
            "mode": "thresholds"
          },
          "mappings": [],
          "thresholds": {
            "mode": "absolute",
            "steps": [
              {
                "color": "green",
                "value": null
              },
              {
                "color": "#EAB839",
                "value": 40
              },
              {
                "color": "red",
                "value": 60
              }
            ]
          },
          "unit": "percent"
        },
        "overrides": []
      },
      "gridPos": {
        "h": 3,
        "w": 3,
        "x": 0,
        "y": 18
      },
      "id": 15,
      "maxDataPoints": 1000,
      "options": {
        "colorMode": "value",
        "graphMode": "area",
        "justifyMode": "auto",
        "orientation": "auto",
        "reduceOptions": {
          "calcs": [
            "lastNotNull"
          ],
          "fields": "",
          "values": false
        },
        "textMode": "auto"
      },
      "pluginVersion": "9.4.7",
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "A",
          "topic": "copilot/data/system/cpu"
        }
      ],
      "title": "CPU load",
      "type": "stat"
    },
    {
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "fieldConfig": {
        "defaults": {
          "color": {
            "mode": "thresholds"
          },
          "mappings": [],
          "thresholds": {
            "mode": "absolute",
            "steps": [
              {
                "color": "green",
                "value": null
              }
            ]
          },
          "unit": "accG"
        },
        "overrides": []
      },
      "gridPos": {
        "h": 6,
        "w": 5,
        "x": 9,
        "y": 18
      },
      "id": 10,
      "maxDataPoints": 1000,
      "options": {
        "colorMode": "value",
        "graphMode": "area",
        "justifyMode": "auto",
        "orientation": "auto",
        "reduceOptions": {
          "calcs": [
            "lastNotNull"
          ],
          "fields": "",
          "values": false
        },
        "textMode": "auto"
      },
      "pluginVersion": "9.4.7",
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "A",
          "topic": "copilot/data/acceleration/x"
        }
      ],
      "title": "X Acceleration",
      "type": "stat"
    },
    {
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "fieldConfig": {
        "defaults": {
          "color": {
            "mode": "thresholds"
          },
          "mappings": [],
          "thresholds": {
            "mode": "absolute",
            "steps": [
              {
                "color": "green",
                "value": null
              }
            ]
          },
          "unit": "accG"
        },
        "overrides": []
      },
      "gridPos": {
        "h": 6,
        "w": 5,
        "x": 14,
        "y": 18
      },
      "id": 11,
      "maxDataPoints": 1000,
      "options": {
        "colorMode": "value",
        "graphMode": "area",
        "justifyMode": "auto",
        "orientation": "auto",
        "reduceOptions": {
          "calcs": [
            "lastNotNull"
          ],
          "fields": "",
          "values": false
        },
        "textMode": "auto"
      },
      "pluginVersion": "9.4.7",
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "A",
          "topic": "copilot/data/acceleration/y"
        }
      ],
      "title": "Y Acceleration",
      "type": "stat"
    },
    {
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "fieldConfig": {
        "defaults": {
          "color": {
            "mode": "thresholds"
          },
          "mappings": [],
          "thresholds": {
            "mode": "absolute",
            "steps": [
              {
                "color": "green",
                "value": null
              }
            ]
          },
          "unit": "accG"
        },
        "overrides": []
      },
      "gridPos": {
        "h": 6,
        "w": 5,
        "x": 19,
        "y": 18
      },
      "id": 12,
      "maxDataPoints": 1000,
      "options": {
        "colorMode": "value",
        "graphMode": "area",
        "justifyMode": "auto",
        "orientation": "auto",
        "reduceOptions": {
          "calcs": [
            "lastNotNull"
          ],
          "fields": "",
          "values": false
        },
        "textMode": "auto"
      },
      "pluginVersion": "9.4.7",
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "A",
          "topic": "copilot/data/acceleration/z"
        }
      ],
      "title": "Z Acceleration",
      "type": "stat"
    },
    {
      "datasource": {
        "type": "grafana-mqtt-datasource",
        "uid": "${DS_MQTT_COPILOT}"
      },
      "fieldConfig": {
        "defaults": {
          "color": {
            "mode": "thresholds"
          },
          "mappings": [],
          "thresholds": {
            "mode": "absolute",
            "steps": [
              {
                "color": "green",
                "value": null
              },
              {
                "color": "#EAB839",
                "value": 40
              },
              {
                "color": "red",
                "value": 60
              }
            ]
          },
          "unit": "percent"
        },
        "overrides": []
      },
      "gridPos": {
        "h": 3,
        "w": 3,
        "x": 0,
        "y": 21
      },
      "id": 16,
      "maxDataPoints": 1000,
      "options": {
        "colorMode": "value",
        "graphMode": "area",
        "justifyMode": "auto",
        "orientation": "auto",
        "reduceOptions": {
          "calcs": [
            "lastNotNull"
          ],
          "fields": "",
          "values": false
        },
        "textMode": "auto"
      },
      "pluginVersion": "9.4.7",
      "targets": [
        {
          "datasource": {
            "type": "grafana-mqtt-datasource",
            "uid": "${DS_MQTT_COPILOT}"
          },
          "refId": "A",
          "topic": "copilot/data/system/memory"
        }
      ],
      "title": "RAM load",
      "type": "stat"
    }
  ],
  "refresh": "",
  "revision": 1,
  "schemaVersion": 38,
  "style": "dark",
  "tags": [],
  "templating": {
    "list": []
  },
  "time": {
    "from": "now-20s",
    "to": "now"
  },
  "timepicker": {},
  "timezone": "",
  "title": "copilot",
  "uid": "bm-ODCkgk",
  "version": 41,
  "weekStart": ""
}
